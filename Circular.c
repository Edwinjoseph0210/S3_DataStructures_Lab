#include<stdio.h>
int size, front=-1, rear=-1;
int arr[10];

void enqueue(int arr[size],int*front,int size,int*rear)
{ int element;
    if((*rear+1)%size == *front)
    {
        printf("Enqueue not a valid expression. Overflow error.\n");
    }
    else
    {   if(*front==-1)
        {
        *front=0;
        }
        *rear=(*rear+1)%size;
        printf("Enter the element to be enqueued: ");
        scanf("%d", &element);
        arr[*rear]=element;
        printf("The element %d has been queued successfully. \n",element);
    }
}


void dequeue(int arr[size],int*front,int size,int*rear)
{ int rem;
    if(*front==*rear==-1)
    {
        printf("Dequeue is not a valid expression. Underflow error.\n");
    }
    else
    {
        rem=arr[*front];
        arr[*front]=0;
        *front=(*front+1)%size;
        printf("The element %d has been dequeued sucessfully.\n",rem);
    }
}


void display(int arr[size],int*front,int size,int*rear)
{
    int i;
   

    if(*front==-1 & *rear==-1)
    {
        printf("The queue is empty. \n");
    }
    else
    {
        printf("The queue is currently: \n");
        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");

}

int main()
{   int size,op,end=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    while(end!=2)
    {
    printf("Enter the operation to be performed:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
        enqueue(arr,&front,size,&rear);
        break;

    case 2:
        dequeue(arr,&front,size,&rear);
        break;

    case 3:
        display(arr,&front,size,&rear);
        break;

    default:
        printf("Program Ended.\n");
        end=2;
        break;
    }

    }
}

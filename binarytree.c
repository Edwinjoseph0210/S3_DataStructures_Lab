#include <stdio.h>
void insert(int tree[], int pos, int data )
{
    tree[pos]=data;
}

void traversal(int tree[], int pos, int max)
{
    if (pos<max && tree[pos]!=-1)
    {
        traversal(tree, 2*pos+1, max);
        printf(" %d",tree[pos]);
        traversal(tree, 2*pos+2, max);

    }
}
int main()
{   int n;
    printf("Enter the maximum number of nodes: ");
    scanf("%d", &n);
    int tree[n];
    int data;
    for(int i=0;i<n;i++)
    {   tree[i]=-1;
        printf("Enter the number at position %d: ",i);
        scanf("%d", &data);
        insert(tree,i,data);
    }

    printf("In Order Traversal");
    traversal(tree,0,n);

}
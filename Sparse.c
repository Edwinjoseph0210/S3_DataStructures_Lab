#include <stdio.h>

int main()
{   int i, j, r,c, k;

    printf("Enter the number of rows and columns of matrix 1: ");
    scanf("%d %d", &r,&c);

    int arr1[r][c];
    
    printf("Enter the elements of Matrix 1:\n");
    for(i=0;i<r;i++)
        {
         for(j=0;j<c;j++)
           {
                scanf("%d", &arr1[i][j]);
               
           }

        }

printf("The first matrix is:\n");


       for(i=0;i<r;i++)
         {
             for(j=0;j<c;j++)
                {
                     printf("%d ", arr1[i][j]);
                 }

            printf("\n \n");
        }
    printf("\n");
    
    k=0;

    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++) 
        {
            if(arr1[i][j]!=0) 
            { k++;
            }
        }
    }
    int arr2[k][3];
    k=1;
    
    arr2[0][0]=r;
    arr2[0][1]=c;

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if(arr1[i][j]!=0) 
            {
                arr2[k][0]=i;
                arr2[k][1]=j;
                arr2[k][2]=arr1[i][j];
                k++;
                printf("k=%d", k);
            }
        }
    }

    arr2[0][2]=k-1;
    printf("\n");
    printf("The Sparse Matrix is: \n");
    
    for(i=0; i<k; i++) {
        for(j=0; j<c; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

}
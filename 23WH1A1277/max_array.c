#include<stdio.h>
int main()
{
     int A[3][3],B[3][3],i,j,r1,r2,c1,c2;
    printf("enter number of rows and columns: ");
    scanf("%d%d",&r1,&c1);
    printf("enter number of rows and columns: ");
    scanf("%d%d",&r2,&c2);
    if (r1==c1 && r2==c2)
    {
        printf(" \n enter %d elements: ",r1*c1); 
         for (i=0; i<r1; i++)
            {for (j=0; j<c1; j++)
            scanf("%d",&A[i][j]);
            }
        printf(" \n enter %d elements: ",r2*c2);
        for (i=0; i<r2; i++)
            {for (j=0; j<c2; j++)
            scanf("%d",&B[i][j]);
            }
        for (i=0; i<r1; i++)
             {for(j=0; j<c1; j++)
                {if (A[i][j]>B[i][j])
                {
                    printf("A is MAX, B is MIN \n");
                }
                else
                {
                    printf("B is MAX, A is MIN \n");
                }
                }
                printf("\n");
            }
    }
    else 
        printf("not possible");
    
    printf("\n ******* \n");
    
    return 0;
}


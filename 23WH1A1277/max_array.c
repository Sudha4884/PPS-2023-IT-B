#include<stdio.h>
#include<string.h>
int main()
{
    int a[10][10],r,c,i,j,max=0;
    printf(" enter numbers of rows: ");
    scanf("%d",&r);
    printf(" enter numbers of coloums: ");
    scanf("%d",&c);
    printf("enter element number : ");
    for(i=0; i<r; i++)
    { for (j=0; j<c; j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("\n ********** \n");
    for(i=0; i<r; i++)
    { for (j=0; j<r; j++)
        {
            if (max<a[i][j])
            {printf("%2d",a[i][j]);}
        }
        printf("\n");
    }
    return 0;
}

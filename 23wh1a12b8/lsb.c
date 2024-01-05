#include<stdio.h>
int checkLSB(int a);

    int checkLSB(int a)
    {
        int b = 1;
        if( a & b )
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

    void main()
    {
       
            int a,result,c;
            printf("enter a number: ");
            scanf("%d",&a);
            result = checkLSB( a);
            printf("\n LSB is %d",result);
            
    }
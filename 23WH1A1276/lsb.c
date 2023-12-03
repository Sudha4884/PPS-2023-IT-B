//LSB IS THE LEAST SIGNIFICANCE BIT(OR lasyt bit ina binary expanison of a decimal number)

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
            scanf("%d",&a);
            result = checkLSB( a);
            printf("\n LSB is %d",result);
            
    }


//#include <stdio.h>

//int main()
/*{
    int num;

    /* Input number from user */
    /*printf("Enter any number: ");
    scanf("%d", &num);*/

    /* If (num & 1) evaluates to 1 */
   /* if(num & 1)
        printf("LSB of %d is set (1).", num);
    else
        printf("LSB of %d is unset (0).", num);

    return 0;
}*/

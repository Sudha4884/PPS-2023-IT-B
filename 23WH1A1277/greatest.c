#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" enter number a : ");
    scanf("%d",&a);
    printf(" enter number b : ");
    scanf("%d",&b);
    printf(" enter number c : ");
    scanf("%d",&c);
    if (b>=a&&b>=c)
    { printf("number %d is greater than others.",b);
    }
    else if (c>=a&&c>=b)
    { printf("number %d is greater than others.",c);
    }
    else 
    { printf("number %d is greater than others.",a);
    }
    return 0;
}

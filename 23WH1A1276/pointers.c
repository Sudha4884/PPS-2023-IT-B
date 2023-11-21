//POINTER TO A STRUCTURE
/*#include<stdio.h>
struct complex
{
    int real,imag;
};
int main()
{
    struct complex c1, *cptr;
    cptr = &c1;
    printf("Enter the real and imaginary part:");
    scanf("%d %d",&cptr->real,&cptr->imag);
    if(cptr->imag > 0)
    {
        printf("%d +i%d",cptr->real,cptr->imag);
    }
    else
    {
        printf("%d -i%d",cptr->real,cptr->imag);
    }
    return 0;
}*/

//POINTER TO 1D ARRAY
/*#include<stdio.h>
void main()
{
    int A[100],*p,i,n;
    p = A;
    printf("The size of the array:");
    scanf("%d",&n);
    for(i = 0; i<n;i++)
    {
        scanf("%d",(p+i));
    }
    p = A;
    for(i = 0; i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}*/


//POINTERS TO AN ARRAY OF STRUCTURES
#include<stdio.h>
struct complex
{
    int imag,real;
};
void main()
{
    struct complex c[10], *cptr;
    int n,i;
    cptr = &c[0];
    printf("Enter the no of complex numbers:");
    scanf("%d",&n);
    printf("Enter the real and imaginary part:");
    for(i = 0;i < n ; i++)
    {
        scanf("%d %d",(cptr->real),(cptr->imag));
    }
    cptr = &c[0];
    for(i = 0; i < n; i++)
    {
        printf("%d +i%d",cptr->real,cptr->imag);
    }
}


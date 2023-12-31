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

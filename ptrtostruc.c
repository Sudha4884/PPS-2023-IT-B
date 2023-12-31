#include<stdio.h>
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
}

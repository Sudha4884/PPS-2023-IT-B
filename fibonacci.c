
    #include<stdio.h>
int main()
{
    int a, b, c, i,n,sum = 0;
    a = 1;
    b = 2;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
    c = a + b;
    a = b;
    b = c;
   if( c % 2 == 0)
   {
    sum += c+2;
   }
    }

    printf("%d",sum);
    return 0;

}

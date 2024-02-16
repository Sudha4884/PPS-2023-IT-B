int main()
 {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[1000],n=0,i=0,sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+= a[i];
    }
    printf("%d", sum);  
    return 0;
}
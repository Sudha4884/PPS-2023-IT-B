unsigned int total = 0;
    int t;
    scanf("%d",&t);
    for(unsigned int n=0 ; n < 10; n++)
    {
        if(n % 3 == 0|| n % 5 == 0)
        {
            total += n;
        
        }
    }
    printf("%d\n",total);
    total = 0;
    for(unsigned int n=0 ; n < 100; n++)
    {
        if(n % 3 == 0|| n % 5 == 0)
        {
            total += n;
        
        }
    }
    printf("%d\n",total);
    return 0;
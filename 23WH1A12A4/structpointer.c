
    #include <stdio.h>
    struct complex 
    {
    int real, imag;
    
    };
    struct complex *cptr,c1;
    void main()
    {
    cptr=&c1;
    printf("enter real and imag on c1 ");
    scanf("%d %d", &c1.real, &c1.imag);
    printf("%d+i%d", c1.real,c1.imag);
    printf("enter real and imag ");
    scanf("%d %d", &cptr-> real, &cptr->imag);
    printf("%d+i%d", cptr->real, cptr->imag);
    }
 
 
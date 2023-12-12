#include<stdio.h>
int twinprime(int n);
 int main()  
{  
    int i, n, count = 0;  
    printf (" \nEnter the last number: ");  
    scanf (" %d", &n); 
    for (i = 2; i <= n; i++)  
    {  
        if (twinprime(i) && twinprime(i+2))  
        {  
            printf (" \n The twin prime number is: (%d, %d) ", i, i+2);  
            count++;   
        }  
    }  
    printf (" \n \n Total number of twin prime pairs: %d", count);  
    return 0;  
}  
int twinprime( int n)  
{  
    int i = 2;  
      
    for (i = 2; i <= n/2; i++)  
    {  
       
        if (n%i == 0)  
            return 0;  
    }  
    
    if (i > n / 2)  
        return 1;  
}  
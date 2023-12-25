//To find the geomentric progression
#include<stdio.h>
#include<math.h>
int main(){
	int x,n,gp,i,res,sum=0;
    printf("Enter x and n ");
    scanf("%d %d",&x,&n);
    for(i=0;i<=n;i++)
    {
        res = pow(x,i);
 	    sum += res;
    }
    printf("%d",sum);
}

//To find the sum of first and last number in a given series
void main(){
    int num,rev[100],i=-1,sum=0,n=0;
    printf("enter a number: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i*=10){
        if(num / i != 0){
            n++;
        }
    }
    while(num != 0){
        i++;
        rev[i] = num % 10;
        num = num / 10;
    }
    sum = rev[0]+rev[n-1];
    printf("%d \n", sum);
}
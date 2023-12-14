///To find the minimum and maximum of array using pointer
void main(){
int A[100],n,i,max,min,*ptr;
ptr = A;
scanf("%d",&n);
for(int i=0; i<n; i++){
        scanf("%d", ptr+i);
    }
    min=max=A[0];
    for(int i=0; i<n; i++){
        if(min > *(ptr + i)){
            min = *(ptr + i) ;
        }
        if(max < *(ptr +i)){
            max = *(ptr + i);
        }
    }
    printf("Maximum number is %d \n",max);
    printf("Minimum number is %d \n",min);
}

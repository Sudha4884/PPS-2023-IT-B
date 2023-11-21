#include<stdio.h>
struct complex{
int real, imaginary;
};
void main(){
  struct complex *cptr, c[10];
  int n, i;
  cptr=c;
  scanf("%d",&n) ;
  for(i=0;i<n;i++){
    scanf("%d %d",cptr -> real,cptr -> imaginary) ;
    cptr++;
  }
  cptr = c;
  for(i=0;i<n;i++){
    printf("%d + %di",cptr -> real,cptr -> imaginary) ;
    cptr++;
  }
}

#include <stdio.h>
struct complex{
    int real,imag;
}c[15],*cptr;
int main(){
    int n,i;
    cptr = c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&cptr->real,&cptr->imag);
        cptr++;
    }
    cptr = c;
    for(i=0;i<n;i++){
        printf("%d+(%d)i\n",cptr->real,cptr->imag);
        cptr++;
    }

}
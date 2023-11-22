#include<stdio.h>
struct cmp
{
int real;
int img;
};
struct cmp c[100],*cptr;
void main()
{
int i,n;
cptr=&c;
printf("ENTER THE VALUE OF N");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&cptr[i]->real,&cptr[i]->img);
}
for(i=0;i<n;i++)
{if(img>0)
printf("%d+%di",*cptr[i]->real,*cptr[i]->img);
else
printf("%d%di",*cptr[i]->real,*cptr->img);
}
}



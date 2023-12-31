void main()
{
 int i, j,A[3][3],B[3][3],C[3][3];
 printf("Enter the elments of matrix A:");
 for (i = 0; i < 3; i++)
{
for(j = 0; j < 3 ; j++)
{
scanf("%d",&A[i][j]);
}
}

printf("Enter the elements of matrix B: ");
for(i = 0; i < 3; i++)
{
for(j = 0;j < 3; j++)
{
 scanf("%d",&B[i][j]);
}
}

/*for(i = 0; i < 3; i++)
{
for(j = 0; j < 3; j++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}*/

for( i = 0; i <3; i++)
{
for(j = 0; j < 3; j++)
{
 
 printf("%d ",C[i][j]= A[i][j] + B[i][j]);
}
printf("\n");
}
}

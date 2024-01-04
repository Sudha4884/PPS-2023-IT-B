 #include<stdio.h>
#include<string.h>

main(){
   int i,j,num;
   char str[100][100],x[100];
   printf("Enter number of names :\n");
   scanf("%d",&num);
   printf("Enter names in any order:\n");
   for(i=0;i<num;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<num;i++){
      for(j=i+1;j<num;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(x,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],x);
         }
      }
   }
   printf("\nThe sorted order of names :\n");
   for(i=0;i<num;i++){
      printf("%s\n",str[i]);
   }
}
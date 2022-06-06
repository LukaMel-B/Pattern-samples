#include <stdio.h>
int main(){
	int i,j,k,s;
	int a[7]={2,4,6,8,6,4,2};
	int b[7]={4,3,2,1,2,3,4};
	for(i=1;i<10;i++){
	   for(j=1;j<11;j++)
	   if(i==1 || i==10)
	     printf("*");
	 else{
		 for(k=1;k<=b[i-2];k++)
	       printf("*"); 
	 for(s=1;s<=a[i-2];s++)
	     printf(" ");
	 for(k=1;k<=b[i-2];k++)
	     printf("*");
		 }
	 printf("\n");    
    }
		return 0;
}



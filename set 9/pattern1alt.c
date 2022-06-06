#include <stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<11;i++){
	   for(j=1;j<11-i+1;j++)
	     printf("*");
	   for(k=1;k<=2*i-2;k++)
	     printf(" ");
	   for(j=1;j<11-i+1;j++)
	     printf("*");
	 printf("\n");    
    }
    for(int i=9; i>=1; i--)  
    {  
     for(int j=i; j<=10; j++)   
		printf("*");   
	 for(int k=1; k<=(2*i)-2; k++)  
		printf(" ");   
	 for(int j=i; j<=10; j++)  
		printf("*");     
	 printf("\n");  
	}     
		return 0;
}

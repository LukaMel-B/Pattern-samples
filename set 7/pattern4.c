#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<6;i++){
		for(j=1;j<=i;j++){
			if(j!=1)
			printf("*");	       
			printf("%d",j);
			}
			printf("\n");
		}
		for(i=4;i>0;i--){
		for(j=1;j<=i;j++){
			if(j!=1)
			printf("*");	     
			printf("%d",j);
			}
			printf("\n");
		}
		return 0;
	}

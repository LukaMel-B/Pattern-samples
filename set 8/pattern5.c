#include <stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<6;i++){
		for(j=4;j>=i;j--)
			printf(" ");
		for(k=1;k<=i;k++)    
			printf("%d",k);
		if(i>1)	{
		 for(k=i-1;k>=1;k--)
			printf("%d",k);}
		printf("\n");
			}
			for(i=4;i>0;i--){
		for(j=4;j>=i;j--)
			printf(" ");
		for(k=1;k<=i;k++)    
			printf("%d",k);
		if(i>1)	{
		 for(k=i-1;k>=1;k--)
			printf("%d",k);}
		printf("\n");
			}
		return 0;
	}


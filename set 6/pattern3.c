#include <stdio.h>
int main(){
	int i,j,k;
	for(i=2;i<7;i++){
		for(j=5;j>=i;j--){
			printf("%d",j);
			}
			printf("*");
			for(k=i-2;k>=1;k--){
			printf("%d",k);
			}
			printf("\n");
		}
		return 0;
	}

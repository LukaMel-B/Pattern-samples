#include <stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<6;i++){
		for(j=4;j>=i;j--){
			printf(" ");
		}
		for(k=i;k>=1;k--){     
			printf("%d",k);
			}
			printf("\n");
			}
		return 0;
	}

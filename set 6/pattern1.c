#include <stdio.h>
int main(){
	int i,j,s,k;
	for(i=7;i>0;i--){
		for(s=7;s>i;s--){
			printf(" ");
			}
		for(j=1;j<=i;j++){
			printf("%c",j+64);
			}
			for(k=i;k>=1;k--){
				printf("%c",k+64);
				}
			printf("\n");
		}
		return 0;
	}

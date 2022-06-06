#include <stdio.h>
int main(){
	int i,j,s,k;
	for(i=0;i<6;i++){
		for(s=5;s>=i;s--){
			printf(" ");
			}
		for(j=i;j>=0;j--){
			printf("%d",j);
			}
			for(k=1;k<=i;k++){
				printf("%d",k);
				}
			printf("\n");
		}
		return 0;
	}

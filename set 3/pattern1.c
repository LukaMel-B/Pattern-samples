#include <stdio.h>
int main(){
	int i,j;
	for(i=1;i<6;i++){
		for(j=i;j>0;j--){
			printf("%c",j+64);
			}
			printf("\n");
		}
		return 0;
	}

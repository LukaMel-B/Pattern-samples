#include <stdio.h>
int main(){
	int i,j,k,s=1,h;
	for(i=1;i<5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",s);
			s++;
			}
			h=s-2;
			for(k=1;k<=i-1;k++){
			printf("%d ",h--);
			}
			printf("\n");
		}
		return 0;
	}

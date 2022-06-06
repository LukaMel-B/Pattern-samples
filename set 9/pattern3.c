#include <stdio.h>
int main(){
	int i,j,s=1,k=16;
	for(i=1;i<6;i++){
		for(j=1;j<=i;j++){
			printf("%d ",s);
			s++;
		}
		printf("\n");
	}
	for(i=5;i>0;i--){
		for(j=i;j>=1;j--)
			printf("%d ",k-j);
		k=k-i;
		printf("\n");
	}
		return 0;
}

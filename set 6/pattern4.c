#include <stdio.h>
int main(){
	int i,j,k,s=1,h;
	for(i=1;i<5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",s);
			s++;
			}
			h=s-1;
			for(k=1;k<=i;k++){
				if(i==1)
				continue;
			printf("%d ",h);
			h--;
			}
			printf("\n");
		}
		return 0;
	}

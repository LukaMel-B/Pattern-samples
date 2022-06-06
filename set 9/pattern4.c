#include <stdio.h>
int main(){
	int i,j,s=1;
	for(i=1;i<6;i++){
		for(j=1;j<=i;j++){
			printf("%d ",s);
			if(j==i)			
				s++;
		    else
				s=s+2;
			}
			printf("\n");
	}
	return 0;
}

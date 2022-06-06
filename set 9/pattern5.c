#include <stdio.h>
int main(){
	int i,j,s=1;
	for(i=1;i<6;i++){
		for(j=1;j<5;j++){
			if(i%2==0){
			printf("%d ",s);		
				s--;
			s=s+5;}
			else{
			printf("%d ",s);		
				s++;
			s=s+3;
			}
		}
			if(i<5)
				printf("\n");
}
	printf("%d ",s-3);
	return 0;
}

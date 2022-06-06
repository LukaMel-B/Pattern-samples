#include <stdio.h>
int main(){
	int i, j, k, n = 1, t;
	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= i; ++j) {
			printf("%d ", n++);
			t=n-1;
		}
		if(i>1) {
	  		for (k = j; k > 1; k--){
				printf("%d ", t--);
			}
		}
		printf("\n");
	}
	return 0;
}

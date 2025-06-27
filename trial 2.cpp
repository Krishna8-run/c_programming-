#include <stdio.h>
int main(){
	int n=10;
	printf("numbers\tsquare\tcube\n");
	for(n=1;n<=10;n++){
		printf("%d\t%d\t%d\n",n,n*n,n*n*n);
	}
	return 0;
}

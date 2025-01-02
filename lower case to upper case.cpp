#include<stdio.h>
int main (){
	char c;
	printf("enter the num in upper case\n");
	scanf("%c",&c);
	if(c>65&&c<90){
		c=c+32;
		 printf("lowercase is %c",c);
	}
}

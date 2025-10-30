#include<stdio.h>

int stringLength( char *str ) {

	int len;
	for( len = 0 ; str[len] ; len++);
	return len;
}

int main(){
	printf("Hello Git\n");
	printf("Hello\n");
	printf("Editted in GIT\n");
	printf("Hi\n");
	
}

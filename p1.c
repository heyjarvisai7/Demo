#include<stdio.h>


int stringLength( char *str ) {

	int length;

	for(length = 0 ; str[length] ; length++);

	return length;
}


int main(){

	char arr[20];
	printf("Give string : ");
	scanf("%s",arr);

	printf("Length  : %s is %d\n",arr, stringLength(arr));
	
}

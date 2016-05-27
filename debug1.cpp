/*what is the output of the program*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char *ptr;
	ptr = (char*)malloc(sizeof(char)*11);
	strcpy(ptr,"sanfoundry");
	printf("%d\n",*ptr);
	return 0;
}
/*answer is 115*/
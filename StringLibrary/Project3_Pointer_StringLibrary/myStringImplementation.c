#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "myString.h"


void main()
{
	size_t length = GetStringLength("What is my Length");	
	printf("Length is  %lu \n", length);

	char checkValue = 'F';
	char* getValue = stringCheck("ABCDEFGHIJKLMNOPQRSTUVWXYZ", checkValue);
	
	printf("Check ABCD for %d\n", checkValue);
	printf("%s\n", getValue);
	getValue = NULL;
	
	char* getValue2 = strrchr("ABCDEFGHIJKLMNOPQRSTUVWXYZ", checkValue);
	printf("Check ABCD for %d\n", checkValue);
	printf("%s\n", getValue2);

	char* haystack = "Chandrahas";
	char* needle = "r\0";

	printf("Use strstr function from String.h\n");
	printf("haystack : %s\n", haystack);
	printf("needle : %s\n", needle);
	char* getNeedle = strstr(haystack, needle);
	printf("getNeedle value :> %s", getNeedle);
}
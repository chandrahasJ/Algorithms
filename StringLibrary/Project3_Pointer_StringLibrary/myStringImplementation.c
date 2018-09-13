#include <stdio.h>
#include <conio.h>
#include <string.h>

size_t GetStringLength(const char* stringValue ) {
	//Add the Null Check
	if (stringValue == NULL)
	{
		return 0; 
	}

	int length = 0;
	const char *ch = stringValue; // Assign String Value with Char Pointer ch
	while (*ch != '\0')
	{		
		length++; //Calculate actual length of the StringValue
		ch++; //Pointer Arthimetic incrementation
	}
	return length;
}

char* stringCheck(const char* stringValue, int c) {
	if (stringValue == NULL) {
		return NULL;
	}

	while (*stringValue != '\0') 
	{		
		if (*stringValue == c) {
			return (char*)stringValue;
		}
		stringValue++;
	}

	return NULL;
}

void main()
{
	size_t length = GetStringLength("What is my Length");	
	printf("Length is  %lu \n", length);

	char getValue = stringCheck("ABCD", 65); 
	printf("%d", getValue);

	char getValue2 = strchr("ABCD", 65);
	printf("%c", getValue2);
}
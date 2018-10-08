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
	//Add the Null Check
	if (stringValue == NULL) {
		return NULL;
	}
	const char *dummyString = stringValue;
	while (*dummyString != '\0') 
	{		
		if (*dummyString == c) {
			return (char*)dummyString;
		}
		dummyString++;
	}

	return NULL;
}

void main()
{
	size_t length = GetStringLength("What is my Length");	
	printf("Length is  %lu \n", length);

	printf("Check ABCD for 65\n");
	char* getValue = stringCheck("ABCD", 'A');
	printf("%s\n", getValue);

	getValue = NULL;

	printf("Check ABCD for 66\n");
	char* getValue2 = strrchr("ABCD", 'A');
	printf("%s", getValue2);
}
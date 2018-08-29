#include <stdio.h>
#include <conio.h>

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



void main()
{
	size_t length = GetStringLength("What is my Length");	
	printf("Length is  %lu \n", length);	
}
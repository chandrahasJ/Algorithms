#include <stdio.h>
#include <conio.h>
size_t GetStringLength(const char* stringValue) {
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

/**********************************************************
	a) Check whether Haystack & Needle are NULL or not
	1) if any one of them are NULL then return NULL
	b) Loop through Haystack till String Terimination '\0'
	c) Inside the above Loop
		Compare Haystack & Needle
		if yes then
		1) create new HayStack & Needle variable
		2) assign orginal Haystack & Needle to this newly create dummy variable
		3) Loop through Needle till string Termination '\0' and also compare dummy haystack & needle
		4) Inside the above loop mentioned in point 3
			Increment both dummy Haystack & Needle variable till it satisfies the loop
	5) outside loop in point 3 and inside Haystack & Needle comparsion scope
		check if dummy needle variable is equal to string termination '\0'.
		if yes  then
			Return casted character pointer haystack
		if no then
			increment haystack till it satisfies the loop
	d)  if all the above check fails it means that haystack does not have the needle
			Return NULL..
*/
char* myStrStr(const char* hayStack, const char* needle) {

}
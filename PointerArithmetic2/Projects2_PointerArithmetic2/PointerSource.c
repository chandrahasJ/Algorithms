#include <stdio.h>



void Question1()
{
	int length = 10;
	int breadth = 12;

	int *length_ptr = &length;
	int *breadth_ptr = &breadth;

	//What will be displayed in the screen?
	printf("Printing derefrenced data");
	printf("%d\n", *length_ptr); //10
	printf("%d\n", *breadth_ptr); //12
}

void Question2()
{
	int length = 10;
	int breadth = 20;

	int* length_ptr = &length;
	int* breadth_ptr = &breadth;

	printf("Printing pointer\n");
	printf("%p\n", length_ptr); //value of length_ptr i.e. address of length
	printf("%p\n", breadth_ptr); //value of breadth_ptr i.e. address of breadth
}

void Question3()
{
	int length = 10;
	int breadth = 20;

	int* length_ptr = &length; //Line 1
	int* breadth_ptr = &breadth;

	int *test = length_ptr; //Line 2
	*test = 25; //Line 3

	printf("\n");
	printf("Length : %d\n",length); //25
	printf("Breadth : %d\n", breadth); //20
	printf("\n");
}

void Question4()
{
	int length = 10;
	int breadth = 20;

	int* length_ptr = &length; //Line 1
	int* breadth_ptr = &breadth;

	int *test = length_ptr; //Line 2
	*test = 25; //Line 3

	printf("\n");
	printf("Length : %d\n", length); //25
	printf("Breadth : %d\n", breadth); //20
	printf("\n");

	test = breadth_ptr;
	*test = 40;

	printf("\n");
	printf("Length : %d\n", length); //25
	printf("Breadth : %d\n", breadth); //40
	printf("\n");
}

void main()
{
	printf("Question 1");
	Question1();
	printf("Question 2");
	Question2();
	printf("Question 3");
	Question3();
	printf("Question 4");
	Question4();
	getch();
}
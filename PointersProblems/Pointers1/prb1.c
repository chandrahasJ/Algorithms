#include <stdio.h>
#include <conio.h>


void sample1()
{
	int length = 10;
	int breadth = 5;

	int *length_ptr = &length;
	int *breadth_ptr = &breadth;

	//* -> Dereferncing Operator
	//& -> Address Of Operator 

	//What will be printed 
	printf("Printing Derefernced pointers \n");
	printf("%d\n", *length_ptr); // 10
	printf("%d\n", *breadth_ptr); // 5 


	printf("Printing Pointers : \n");
	printf("%p\n", length_ptr); //Address of pointer 
	printf("%p\n", breadth_ptr); //Address of pointer
	
}

void Sample2()
{
	int length = 10;
	int breadth = 5;

	int *length_ptr = &length;
	int *breadth_ptr = &breadth;

	int* test = length_ptr; 
	*test = 25;  
	//As we have assigning new pointer *test with *length_ptr 
	// but *length_ptr is already pointing to length variable. 
	// *test is also point to length variable
	// Now both *test & *length_ptr has address of length variable
	// Hence changing value of *test using derefrence operator will change the value of length variable from 10 to 25.

	printf("Printing Length and Bread values for the first time : \n");
	printf("Length  %d\n", length); //25 
	printf("Breadth %d\n", breadth); //5

	test = breadth_ptr;
	*test = 20;
	//As we have reassigned *test with *breadth_ptr 
	//*test will be pointing to *breadth_ptr & will contain the address of breadth variable
	//As *breadth_ptr is pointing to breadth variable 

	printf("Printing Length and Bread values for the second time : \n");
	printf("Length  %d\n", length); //25 
	printf("Breadth %d\n", breadth); //20

}

void main()
{
	sample1();
	Sample2();
	getch();
}
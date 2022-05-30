#include <iostream> 
using namespace std;

void swap(int*, int*);

int main()
{
	int x = 29, y = 89;
	int* a;
	int* b;

	a = &x;
	b = &y;

	cout << "\nActual values of x and y are : " << x << ", " << y;
	cout << "\n\nAddress of a " << &a; 
	cout << "\nAddress of b " << &b;

	cout << "\n\n\nAfter swapping, the x and y values are : ";
	swap(a, b); //function swap passed by pointers a and b 
	cout << "\n\n"; 
}

void swap(int* a1, int* b1) //copy of the pointers created and pointing to the x and y
{

	int temp = *a1;
	*a1 = *b1;
	*b1 = temp;

	cout << *a1 << ", " << *b1; //accessing the x and y values through a1 and b1
	cout << "\n\nAddress of a1 " << &a1;
	cout << "\nAddress of b1 " << &b1;
	cout << "\n";

}


#include <iostream>
using namespace std;

// Driver code
int main()
{
	// define input array/string
	char arr[] = "SeEkS";
	int code;

	// print arr
	cout << " Input String = " << arr;

	// execute a loop to traverse the arr elements
	for (int i = 0; arr[i] != '\0'; i++) {
		code = arr[i];

// display unicode code point at i-th index
cout <<"\n The Unicode Code Point At "<<i<< " is = " << code;
	}
	return 0;
}

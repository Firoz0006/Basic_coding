// To demonstrate function overloading
// Function overloading is a feature in C++ where two or more functions
// can have the same name but different parameters.
#include<bits/stdc++.h>
using namespace std;


void add(int a, int b)
{
cout << "sum = " << (a + b)<<endl;
}

void add(double a, double b)
{
	cout << "sum = " << (a + b)<<endl;
}

// Driver code
int main()
{
	add(10, 2);
	add(5.3, 6.2);

	return 0;
}

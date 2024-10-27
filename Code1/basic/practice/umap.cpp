#include<bits/stdc++.h>
// #include <iostream>
#include <unordered_map>
using namespace std;

// Driver code
int main() 
{
	// Initialize unordered_map 
	// using default constructor
	unordered_map<string,string>New_map;

	// Adding key-value pairs using 
	// subscript([]) and assignment(=) 
	// operators
	New_map["Ground"] = "Grass";
	New_map["Floor"] = "Cement";
	New_map["Table"] = "Wood";

	// Traverse through the unordered_map
	for(auto x: New_map)
	{
	cout << x.first << "->" << 
			x.second <<endl;
	} 
	return 0;
}

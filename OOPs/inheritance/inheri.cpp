#include<bits/stdc++.h>
//simple inheritance example
using namespace std;
class A
{
	public:
	void func()
	{
		cout<<"inherited";
	}
};
class B :public A {

};

int main(){
	B b;
	b.func();
}
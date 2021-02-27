#include<iostream>
using namespace std;
void main()
{
	void swap(int x, int y);
	int a, b;
	cout << "Put two numbers :" << endl;
	cin >> a >> b;
	cout << "The number U have put is: " << a <<" "<< b<<endl;
	swap(a, b);
	cout << "The swap number is: " << a <<" "<< b;
}
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
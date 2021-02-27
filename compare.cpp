#include<iostream>
using namespace std;
int max(int a, int b);
int max_4(int a, int b, int c, int d);
int main(void)
{
	int a, b, c, d, m;
	cout << "Put four interger to compare" << endl;
	cin >> a >> b >> c >> d;
	m = max_4(a, b, c, d);
	cout << "The Max interger is : " << m << endl;
	return 0;


}
int max(int a, int b)
{
	int m;
	m = a > b ? a : b;
	return m;
}
int max_4(int a, int b, int c, int d)
{
	int m, l, f;
	m = max(a, b);
	l = max(c, d);
	f = max(m, l);
	return f;

}
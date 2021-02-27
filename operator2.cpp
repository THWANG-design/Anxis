#include<iostream>
using namespace std;
class Complex
{
public:
	friend istream& operator >> (istream&, Complex&);
	friend ostream& operator << (ostream&, Complex&);
private:
	double real;
	double imag;
};
ostream& operator << (ostream& output, Complex& exp)
{
	output << "("<< exp.real;
	if (exp.imag > 0)
		output << " + ";
	output << exp.imag << "i)" << endl;
	return output;
}

istream& operator >> (istream &input, Complex &exp)
{
	cout << "The real and imaginary part of your choice" << endl;
	input >> exp.real >> exp.imag;
	return input;
}
int main(void)
{
	Complex exp1, exp2;
	cin >> exp1 >> exp2;
	cout << exp1 << exp2;
}


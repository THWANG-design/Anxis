#include <iostream>
#include<string>
using namespace std;
class String
{
public:
	String() { p = NULL; }
	String(const char*);
	friend bool operator > (String& string1, String& string2);
	friend bool operator < (String& string1, String& string2);
	friend bool operator == (String& string1, String& string2);
	void display();
private:
	const char* p;
};
String::String(const char* str)
{
	p = str;
}
void String::display()
{
	cout << p;
}
bool operator > (String& string1, String& string2)
{
	if (strcmp(string1.p, string2.p) > 0)
		return true;
	else return false;
}
bool operator < (String& string1, String& string2)
{
	if (strcmp(string1.p, string2.p) < 0)
		return true;
	else return false;

}
bool operator == (String& string1, String& string2)
{
	if (strcmp(string1.p, string2.p)  == 0)
		return true;
	else return false;

}
void compare(String& string1, String& string2)
{
	if (string1 > string2)
	{
		string1.display();
		cout << " >";
		string2.display();
		cout << endl;
	}
	if (string1 < string2)
	{
		string1.display();
		cout << " <";
		string2.display();
		cout << endl;

	}
	if (string1 == string2)
	{
		string1.display();
		cout << " ==" ;
		string2.display();
		cout << endl;

	}
}

int main(void)
{
	String string1("Hour");
	String string2("apple");
	String string3("Memory");
	compare(string1, string2);
	compare(string1, string3);
	compare(string2, string3);
}

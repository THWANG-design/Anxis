#include<iostream>
using namespace std;
class Time
{
public:
	int hour;
	int minute;
	int second;
};

int main()
{
	void set_time_show(Time*);
	Time std, *p;
	Time std1, * p1;
	p = &std;
	p1 = &std1;
	set_time_show(p);
	set_time_show(p1);
	return 0;
}
void set_time_show(Time *p)
{
	cout << "Insert the time :" << endl;
	cin >> p->hour;
	cin >> p->minute;
	cin >> p->second;
	cout << p->hour << ":" << p->minute << ":" << p ->second << endl; 
}


#include"Student.h"
int main()
{
	student a("ivan", "ivanov", 15, "23123ads", "12.12.2020");
	student b("ivaadsn", "ivaadsno", 1, "23ads123ad", "12.1.2020");
	univer x;
	x.AddStudent(a);
	x.AddStudent(b);
	x.AddStudent(a);
	cout << x;
	x.sortstudent();
	a.tofile();
	b.tofile();
	cout << endl << endl;
	cout << x;

}
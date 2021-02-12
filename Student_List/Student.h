#pragma once
#include<iostream>
#include<list>
#include<string>
#include<fstream>
using namespace std;

class student
{
private:
	string name;
	string surname;
	int course;
	string group;
	string datebig;
public:
	student();
	student(string name, string surname, int course, string group, string datebig);
	student(const student& obj);
	~student();
	void setname(string name);
	void setsurname(string surname);
	void setcourse(int course);
	void setgroup(string group);
	void setdatebig(string datebig);
	string getname();
	string getsurname();
	int getcourse();
	string getgroup();
	string getdatebig();
	void shows();
	friend ostream& operator<<(ostream& out, student& obj);
	bool operator<(student& obj);
	void tofile();
	void fromfile();
};



class univer
{
private:
	list<student> students;
public:
	univer();
	~univer();
	void AddStudent(student& obj);
	void DelStudent(list<student>::iterator it);
	void sortstudent();
	list<student>::iterator searchstudent(string surname);
	friend ostream& operator<<(ostream& out, univer& obj)
	{
		for (list<student>::iterator iter = obj.students.begin(); iter != obj.students.end(); iter++)
			out << *iter << endl;
		return out;
	};
};

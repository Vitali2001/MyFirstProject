#include "Student.h"
using namespace std;
student::student()
{
}

student::student(string name, string surname, int course, string group, string datebig)
{
    this->name = name;
    this->surname = surname;
    this->course = course;
    this->group = group;
    this->datebig = datebig;
}

student::student(const student& obj)
{
    this->name = obj.name;
    this->surname = obj.surname;
    this->course = obj.course;
    this->group = obj.group;
    this->datebig = obj.datebig;
}

student::~student()
{
}

void student::setname(string name)
{
    this->name = name;
}

void student::setsurname(string surname)
{
    this->surname = surname;
}

void student::setcourse(int course)
{
    this->course = course;
}

void student::setgroup(string group)
{
    this->group = group;
}

void student::setdatebig(string datebig)
{
    this->datebig = datebig;
}

string student::getname()
{
    return name;
}

string student::getsurname()
{
    return surname;
}

int student::getcourse()
{
    return course;
}

string student::getgroup()
{
    return group;
}

string student::getdatebig()
{
    return datebig;
}

void student::shows()
{
}

bool student::operator<(student& obj)
{
    if (obj.getsurname() > this->getsurname())
    {
        return true;
    }
    return false;
}

void student::tofile()
{
    fstream f("Student.txt", ios::app);
    f << name << " " << surname << " " << group << " " << datebig << " " << course << endl;
    f.close();
}

void student::fromfile()
{
    fstream f("Student.txt", ios::in);
    f >> name >> surname >> group >> datebig >> course;
    f.close();
}

ostream& operator<<(ostream& out, student& obj)
{
    out << "Name = " << obj.name << endl;
    out << "Srname = " << obj.surname << endl;
    out << "Course = " << obj.course << endl;
    out << "Group = " << obj.group << endl;
    out << "Date big = " << obj.datebig << endl;
    return out;
}


univer::univer()
{
}

univer::~univer()
{
    students.clear();
}

void univer::AddStudent(student& obj)
{
    students.push_back(obj);
}

void univer::DelStudent(list<student>::iterator it)
{
    students.erase(it);
}

void univer::sortstudent()
{
    students.sort();
}

list<student>::iterator univer::searchstudent(string surname)
{
    for (list<student>::iterator iter = students.begin(); iter != students.end(); iter++)
    {
        if ((*iter).getsurname() == surname)
        {
            return iter;
        }
    }


    return students.end();
}
#include<iostream>
using namespace std;

class Employee
{
private:
    string Name;
    int id;
public:
    Employee()
    {
        cout << "Enter Name : ";
        getline(cin, Name);
        cout << "\nEnter Id  : ";
        cin >> id;
        cin.ignore();
    }

    string getName()
    {
        return Name;
    }

    int getId()
    {
        return id;
    }
};

class Department : public Employee
{
public:
    string position;
    string domain;

    void set()
    {
        cout << "\nEnter Position: ";
        cin >> position;
        cout << "\nEnter Domain: ";
        cin >> domain;
    }
};

class Service : protected Department
{
private:
    int NumOfService;
public:
    void set()
    {
        Department::set();
        cout << "\nEnter Number of Service: ";
        cin >> NumOfService;
    }

    void showInfo()
    {
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getId() << endl;
        cout << "Position: " << position << endl;
        cout << "Domain: " << domain << endl;
        cout << "Number of Service: " << NumOfService << endl;
    }
};

int main()
{
    Service emp1;
    emp1.set();
    emp1.showInfo();

}

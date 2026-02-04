#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    int reg;
    int age;
    // constructor
    Teacher(string name, int reg, int age)
    {
        this->name = name;
        this->reg = reg;
        this->age = age;
    }

    // stetter use to set the peivet value
    void setSalary(double salary)
    {
        this->salary = salary;
    }

    // getter function to get the privet value
    double getSalary()
    {
        return this->salary;
    }
    // dispaly Funtion
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "reg no: " << reg << endl;
        cout << "age: " << age << endl;
        cout << "salary: " << getSalary() << endl;
    }
};

int main()
{
    Teacher t1("sanjida", 101, 25); // t1 is the object of teacher class
    t1.setSalary(500000);
    t1.display();
    return 0;
}
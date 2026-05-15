#include <bits/stdc++.h>
#include "Employee.h"//when you include employee.h, it will automatically include person.h because employee.h includes person.h
using namespace std;

Employee :: Employee(int id, string name, string department, double salary) : Person(id, name) {
    this->department = department;
    this->salary = salary;
}

void Employee :: display() {
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Department: " << department << endl;
    cout << "Employee Salary: " << salary << endl;
}
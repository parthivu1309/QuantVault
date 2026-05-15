#include <bits/stdc++.h>
#include "Person.h"
using namespace std;
class Employee : public Person{
    private:
        string department;
        double salary;
    public:
        Employee(int id, string name, string department, double salary);
        void display();
};
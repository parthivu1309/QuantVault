#include <bits/stdc++.h>
using namespace std;

class Person{
    protected:
        int id;
        string name;
    public:
        //A pure virtual function so that my class is Abstarct Base Class(ABC);
        virtual void display() = 0;
        //declaring a constructor for the class
        Person(int id, string name);
};
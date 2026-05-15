#include <bits/stdc++.h>
#include "Person.h";
using namespace std;

class Customer : public Person{
    private:
        string email;
        string phone;
    public:
        Customer(int id, string name, string email, string phone);
        void display();
};
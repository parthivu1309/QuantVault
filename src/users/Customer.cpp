#include <bits/stdc++.h>
#include "Person.h"
#include "Customer.h"
using namespace std;

Customer :: Customer(int id, string name, string email, string phone) : Person(id, name) {
    this->email = email;
    this->phone = phone;
}

void Customer :: display() {
    cout << "Customer ID: " << id << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Customer Email: " << email << endl;
    cout << "Customer Phone: " << phone << endl;
}
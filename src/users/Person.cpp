#include <bits/stdc++.h>
#include "Person.h"
using namespace std;

int Person :: count = 0; // Initialize the static count variable
Person :: Person(int id, string name){
    this->id = id;
    this->name = name;
    count++; // Increment the static count variable
}
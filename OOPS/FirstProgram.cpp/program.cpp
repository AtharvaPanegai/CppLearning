#include "bits/stdc++.h"
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout << "Name : ";
        cout << name << endl;
        cout << "Age : ";
        cout << age << endl;
        cout << "Gender : ";
        cout << gender << endl;
    }
};

int main()
{

    student a;
    a.name = "Atharva";
    a.age = 20;
    a.gender = false;
    // instead of adding one by one we can make an array
    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "input age";
        cin >> arr[i].age;
        cout << "input name";
        cin >> arr[i].name;
        cout << "input gender";
        cin >> arr[i].gender;
    }
    // to print all the entries we'll create a function in class
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }

    return 0;
}
#include "bits/stdc++.h"
using namespace std;

class student
{
    string name;

public:
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

    void setName(string s)
    {
        name = s;
    }

    void getName(){
        cout<<name;
    }
};

int main()
{

    // instead of adding one by one we can make an array
    student arr[3];
    for (int i = 0; i < 3; i++)
    {

        cout << "input age";
        cin >> arr[i].age;
        cout << "input name";
        string s;
        cin >> s;
        arr[i].setName(s);
        cout << "input gender";
        cin >> arr[i].gender;
    }
    // to print all the entries we'll create a function in class
    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }

    // To access private member of class we make a function

    return 0;
}
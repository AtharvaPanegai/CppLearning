#include "bits/stdc++.h"
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;
    student()
    {
        cout << "This is Default Constructor";
    } // Default Constructor
    student(string s, int a, bool g)
    {
        cout << "This is Parameterised constructor"
             << "\n";
        name = s;
        age = a;
        gender = g;
    } // Parameterised constructor

    student(student &a)
    {
        cout << "Copy Constructor"
             << "\n";
        name = a.name;
        age = a.age;
        gender = a.gender;
    } // copy constructor

    // destructor
    ~student()
    {
        cout << "Destructor is called"
             << "\n";
    }

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

    void getName()
    {
        cout << name;
    }
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "input age";
    //     cin >> arr[i].age;
    //     cout << "input name";
    //     cin >> arr[i].name;
    //     cout << "input gender";
    //     cin >> arr[i].gender;
    // }

    // ---- Instead of using the loop we can use constructor

    // ---- Now accessing the constructor
    student a("Atharva", 10, 1);
    student b;
    student c = a;

    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same";
    }

    return 0;
}
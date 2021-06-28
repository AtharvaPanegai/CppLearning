#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "Input Char" << endl;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "hello" << endl;
        break;
    case 'b':
        cout << "namaste" << endl;
        break;
    case 'c':
        cout << "namskar" << endl;
        break;

    default:
        cout<<"wrong Choice"<<endl;
        break;
    }
    return 0;
}
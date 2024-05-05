#include <iostream>

using namespace std;

int main()
{

    int a =5 , b = 4;

    cout << "---Operators in C++---" << endl<< endl;

    cout << "The value of a-b is : " << a - b << endl;
    cout << "The value of a+b is : " << a + b << endl;
    cout << "The value of a+b is : " << a + b << endl;
    cout << "The value of a*b is : " << a * b << endl;
    cout << "The value of a/b is : " << a / b << endl;
    cout << "The value of a%b is : " << b % a << endl;
    cout << "The value of a++ is : " << a++ << endl;
    cout << "The value of a-- is : " << a-- << endl;
    cout << "The value of ++a is : " << ++a << endl;
    cout << "The value of --a is : " << --a << endl<<endl;

    // Logical operators

    cout<< "---Logical operators---"<<endl<<endl;

    cout << "The value of a==b is : " << (a == b) << endl;
    cout << "The value of (a!=b) is : " << (a != b) << endl;
    cout << "The value of (a<b) is : " << (a < b) << endl;
    cout << "The value of (a>b) is : " << (a > b) << endl<<endl;

    cout << "The value of ((a != b) && (a < b)) is : " << ((a != b) && (a < b)) << endl;
    cout << "The value of ((a > b) || (a == b)) is : " << ((a > b) || (a == b)) << endl;

    return 0;
}

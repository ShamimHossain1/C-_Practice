#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int marks[4] = {34, 4, 3, 453};

    cout << setw(4) << marks[0] << endl;
    cout << setw(4) << marks[1] << endl;
    cout << setw(4) << marks[2] << endl;
    cout << setw(4) << marks[3] << endl;

    cout << endl;
    cout << "For loop" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks index " << i << " is :" << setw(4) << marks[i] << endl;
    }

    cout << endl;
    cout << "While loop" << endl;

    int i = 0;

    while (i < 4)
    {
        cout << "The value of marks index " << i << " is :" << setw(4) << marks[i] << endl;
        i++;
    }
    cout << endl;
    cout << "Do while loop" << endl;
    int b = 0;

    do
    {
        cout << "The value of marks index " << b << " is :" << setw(4) << marks[b] << endl;
        b++;
    } while (b < 4);


    // Pointers and array

    int *p = marks;
    // cout <<"The value of marks[0] is"<< *(p++) << endl; 
    // cout <<"The value of marks[0] is"<< *(++p) << endl; 
    // cout <<"The value of marks[0] is"<< *p << endl; 
    cout <<"The value of marks[0] is"<< *(p+1) << endl; 
    cout <<"The value of marks[0] is"<< *p << endl; 
    cout <<"The value of marks[0] is"<< *(p+2) << endl; 
    cout <<"The value of marks[0] is"<< *(p+3) << endl; 
   

    return 0;
}
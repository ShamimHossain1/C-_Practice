#include <iostream>

using namespace std;

typedef struct Employee
{
    int id;
    int age;
    int salary;

} ep;

union money
{
    int rice;
    char car;
    int land;

} ;




int main()
{

    ep Beast;
    Beast.id = 1;
    Beast.age = 25;
    Beast.salary = 1200000;

    cout << "Employee id : " << Beast.id << endl;
    cout << "Employee age : " << Beast.age << endl;
    cout << "Employee salary : " << Beast.salary << endl;

    union money e1;
    e1.rice = 34;
    e1.car = 'c';
    cout << e1.rice << endl;
    // cout << e1.car << endl;


    enum Meal {brekafast, lunch, dinner};
    cout<<brekafast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;




    return 0;
}
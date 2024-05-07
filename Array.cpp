#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int marks[4] = {34, 4, 3, 453};

    cout<<setw(4)<<marks[0]<<endl;
    cout<<setw(4)<<marks[1]<<endl;
    cout<<setw(4)<<marks[2]<<endl;
    cout<<setw(4)<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
     cout<<"The value of marks index "<<i<<" is :"<<setw(4)<<marks[i]<< endl;
    }
    

    return 0;
}
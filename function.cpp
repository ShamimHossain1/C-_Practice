#include<iostream>

using namespace std;

int sum(int a, int b);

inline int total(int a, int b){
    return a+b;
}

int main(){

    cout<<"Sum is "<<sum(10, 30);
    cout<<"\nTotal 1 is "<<total(20, 30);
    cout<<"\nTotal 2 is "<<total(2, 30);
    cout<<"\nTotal 3 is "<<total(5, 30);

    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}
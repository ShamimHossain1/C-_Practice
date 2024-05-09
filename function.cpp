#include<iostream>

using namespace std;

int sum(int a, int b);

int main(){

    cout<<"Sum is "<<sum(10, 30);

    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}
#include<iostream>

using namespace std;

int fib(int n){
    if (n<2)
    {
        return n;
    }
    
    return fib(n-2) + fib(n-1);
}

int main(){

    int n;
    cout<<"Enter the number for fibonacci: ";
    cin>>n;
    cout<<"The fibonacci series is: "<<fib(n);
    

    return 0;    

}
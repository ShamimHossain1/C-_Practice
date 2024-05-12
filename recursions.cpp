#include <iostream>

using namespace std;

int factiorial(int n)
{

    if (n <= 1)
    {
        return 1;
    }
    return n * factiorial(n - 1);

    /*
       Step by Step for factorial of 4

       factorial(4) = 4 * factorial(3);
       factorial(4) = 4 * 3 * factorial(2);
       factorial(4) = 4 * 3 * 2 * factorial(1);
       factorial(4) = 4 * 3 * 2 * 1;
       factorial(4) = 24;
    */
}

int main()
{

    cout << "ENter the number for factiorial: ";
    int n;
    cin >> n;
    cout << "The factiorial of " << n << " is " << factiorial(n) << endl;

    return 0;
}
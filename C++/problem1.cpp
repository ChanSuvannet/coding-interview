/*
Given a number n, check whether it is even or odd. Return true for even and false for odd.
Examples: 

Input: n = 15
Output: false
Explanation: 15 % 2 = 1, so 15 is odd .

Input: n = 44
Output: true
Explanation: 44 % 2 = 0, so 44 is even.

*/

#include <iostream>
using namespace std;
bool isEven(int number)
{
    // fiding remainder of number
    int rem = number % 2;

    if (rem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 15;
    if (isEven(n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
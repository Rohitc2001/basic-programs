                // WAP to check that the entered number is Palindrome or not.
#include<iostream>
using namespace std;

int main()
{
    int num,res=0,rem;

    cout << "Enter number : ";
    cin >> num;

    int num1 =  num;
    
    while(num != 0)
    {
        rem = num % 10;
        res = (res * 10) + rem;
        num = num / 10;
    }

    if(num1 == res)
    {
        cout << "Number is Palindrome";
    }
    else
    {
        cout << "Number is Not Palindrome";
    }
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the second number :";
    cin >> b;
    cout << "Enter the third number :";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "The first number is the greatest among three.";
    }
    else if (b > a && b > c)
    {
        cout << "The second number is greatest among three.";
    }
    else
    {
        cout << "The third number is greatest among three.";
    }

    return 0;
}
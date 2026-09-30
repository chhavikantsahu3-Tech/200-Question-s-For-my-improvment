#include <iostream>
using namespace std;
int main()
{
    int n;
    int num = 0;

    cout << "Enter your number :";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        num=num+i;
        
    }
    cout<<num;
    return 0;
}
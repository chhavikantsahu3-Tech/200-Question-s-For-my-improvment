#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter your array size :";
    cin >> size;

    int marks[size];

    cout << "Enter your values :";
    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout<<marks[i]<<endl;
    }
    

    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number :";
    cin>>n;
    if (n > 0)
    {
        cout<<"The entered number is positive :"<<n;
    }
    else {
        cout<<"The entered number is negative :"<<n;
    }
    return 0;
}
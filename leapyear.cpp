#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter The year  :";
    cin>>y;
    if (y%400==0)
    {
        cout<<"The year is leap year  :"<<y;
    }
    else if (y%100==0)
    {
        cout<<"The year is not leap year .";
    }
    else if (y%4==0)
    {
        cout<<"The year is leap year  :"<<y;
    }
    
    else{
        cout<<"The year is not leap year.";
    }
 return 0;   
}
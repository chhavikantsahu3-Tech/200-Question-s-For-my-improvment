#include<iostream>
using namespace std;
int main(){
    int monthd;
    cout<<"Enter your number of month around(1-12)  :";
    cin>>monthd;

    switch (monthd)
    {
    case 1: cout<<"Januvary";
        break;
    case 2: cout<<"February";
        break;
    case 3: cout<<"March";
        break;
     case 4: cout<<"April";
        break;
    case 5: cout<<"May";
        break;  
    case 6: cout<<"June";
        break;  
case 7: cout<<"July";
        break;
    case 8: cout<<"Augest";
        break;
    case 9: cout<<"September";
        break;
    case 10: cout<<"October";
        break;
    case 11: cout<<"November";
        break;
     case 12: cout<<"December";
        break;
    default:
    cout<<"Invalid number the number is not around (1-12)";
        break;
    }
    return 0;
}
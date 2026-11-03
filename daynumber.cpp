#include<iostream>
using namespace std;
int main(){
  int daynum;
  cout<<"Enter your day number around (1-7) :";
  cin>>daynum;
    switch (daynum)
    {
    case 1:  cout<<"Monday";
        break;
    case 2: cout<<"Tusday";
        break;
    case 3: cout<<"Wednesday";
        break;
    case 4: cout<<"Thursday";
        break;
    case 5: cout<<"Friday";
        break;
    case 6: cout<<"Saturday";
        break;
    case 7: cout<<"Sunday";
        break;          
    
    default:
    cout<<"Invalid number.";
        break;
    }



    return 0;
}
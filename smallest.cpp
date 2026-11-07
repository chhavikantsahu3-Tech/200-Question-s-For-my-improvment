#include<iostream>
using namespace std;

int main(){
    int num[]= {34,3,92,4,-1,30,4};
    int  smallest = INT8_MAX;
    int size = 7;
  
    for (int i = 0; i < size; i++)
    {
        if (num[i]<smallest)
        {
             smallest = num[i];
        }
        
    }
    cout<<smallest<<endl;
    return 0;
}
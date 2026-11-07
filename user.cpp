#include<iostream>
using namespace std;
int main(){
    int size;
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
     cout<<"Enter the size of array  :";
     cin>>size;

     int num[size];
cout<<"Enter the array value :";
     for (int i = 0; i < size; i++)
     {
        cin>>num[i];
     }
     
    
     for (int i = 0; i < size; i++)
     {
       smallest = min(num[i],smallest);
       largest = max(num[i],largest);
        
     }
      
     cout<<"The smallest for the array is :"<<smallest<<endl;
     cout<<"The largest form the array is :"<<largest<<endl;
    return 0;
}
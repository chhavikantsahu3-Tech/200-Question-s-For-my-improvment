#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
cout<<"The array is :";

for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<endl;
}


    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size :";
    cin>>size;
    
   int num[size];
   int cum[size];
cout<<"Enter the value of arr 01 :";
   for (int i = 0; i < size; i++)
   {
    cin>>num[i];
   }
cout<<"Enter the value of arr 02 :";
   for (int i = 0; i < size; i++)
   {
    cin>>cum[i];
   }

int sum[size];
for (int i = 0; i < size; i++)
{
    sum[i]=num[i]+cum[i];
}

for (int  i = 0; i < size; i++)
{
    cout<<sum[i]<<endl;
}



   

    return 0;
}
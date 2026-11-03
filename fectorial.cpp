#include<iostream>
using namespace std;
int main(){
   int n;
   long long fect = 1;
   cout<<"Enter your number :";
   cin>>n;
   if (n<0)
   {
      cout<<"The number is negative :";
   }
   else{
      for (int i = 1; i <= n; i++)
      {
         fect = fect*i;
      }
      cout<<"The fectorial of a number is :"<<fect;
   }
   
   return 0;
}
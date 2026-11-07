#include<iostream>
using namespace std;
int main(){
 int    smallest = INT8_MAX;
int num[]={14,55,77,6,55,9,5,1,0,8,-5};
 int c = sizeof(num)/4;

 for (int i = 0; i < c; i++)
 {
    if (num[i]<smallest)
    {
        smallest= num[i];
    }
    
 }
 
 cout<<smallest;

   return 0;
}
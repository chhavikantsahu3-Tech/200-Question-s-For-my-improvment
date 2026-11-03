#include<iostream>
using namespace std;

 int sum(int a,int b){
 int s = a+b;
  return s;
}


double minmum(double a,double b){
    if (a>=b)
    {
        cout<<"the a is greatest  :";
        return a;
    }
    else{
        cout<<"B is greatest  :";
        return b;
    }


    
}
int main(){
   cout<<sum(10,50)<<endl;
   cout<<minmum(10,50)<<endl;



    return 0;
}
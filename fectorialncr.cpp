#include <iostream>
using namespace std;

int facto(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int Ncr(int n, int r)
{
    int fact_n = facto(n);
    int fact_r = facto(r);
    int fact_nmr = facto(n - r);

  return   fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n, r;
    cout << "Enter the value of n :";
    cin >> n;
    cout << "enter the value of r  :";
    cin >> r;
    cout<<Ncr(n, r);

    return 0;
}
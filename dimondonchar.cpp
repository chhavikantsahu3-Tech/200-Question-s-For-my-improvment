 #include<iostream>
 using namespace std;
 int main(){
 
 
 int n;
 char ch = 'A';
    cout << "Enter your number :";
    cin >> n;


    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i - 1; j++)
        {
            cout << ch<<" ";
            ch = ch+1;
        }
        cout << endl;
    }




    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= 2 * i - 1; j++)
        {
            cout << ch <<" ";
            ch = ch+1;
        }
        cout << endl;
    }


    return 0;
}

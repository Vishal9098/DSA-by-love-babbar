#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. = "<<endl;
    cin>>n;

    int a = 0, b = 1;
    cout<<a<<" "<<b<<" ";

    for (int i = 1; i <= n; i++)
    {
        /* code */
        int c;
        c = a+b;
        cout<<c<<" ";
        
        a=b;
        b=c;
    }
}
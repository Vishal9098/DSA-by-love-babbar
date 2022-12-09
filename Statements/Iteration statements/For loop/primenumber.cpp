#include<iostream>
using namespace std;

int main(){

    int n;
    bool f=1;
    cout<<"Enter the value of n = ";
    cin>>n;

    for (int i = 2; i < n; i++){
        if (n%i == 0){
            f = 0;
            break;
        }
    }
    if (f==0)
    {
        cout<<"Not a prime number";
    }
    else{
        cout<<"Prime number";
    }

}
#include<iostream>
using namespace std;

int main(){

    int a[10];
    fill_n(a,10,9);       //How to fill an array with same number 

    for (int i = 0; i <= 9; i++)
    {
        /* code */
        cout << a[i]<< " ";
    }
    
}
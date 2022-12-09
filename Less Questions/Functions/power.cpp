#include<iostream>
using namespace std;

int power(int a , int b){

    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans * a;
    } 
    return ans;
}
int main(){

   int ans = power(5,2);
    cout<<ans;
}








/*  int main(){

    int a,b;
    cout<<"Enter a number = ";
    cin>>a;
    cout<<"Enter the power = ";
    cin>>b;
    
    int ans = 1; 

    for(int i =1; i<=b; i++){
        ans = ans * a; 
    }
    cout<<ans;
    return 0;
}    */


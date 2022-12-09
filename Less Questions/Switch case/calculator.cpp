#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Enter the value of a = "<<endl;
    cin>>a;
    cout<<"Enter the value of b = "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation = "<<endl;
    cin>>op;

    switch(op)
    {

        case '+' :    cout<<"Addition = "<<a+b<<endl;
                        break;

        case '-' :    cout<<"Subtraction = "<<a-b<<endl; 
                        break;

        case '*' :    cout<<"Multiply = "<<a*b<<endl;
                        break;

        case '/' :    cout<<"Divide = "<<a/b<<endl;
                        break;
        
        case '%' :   cout<<"Remainder = "<<a%b<<endl;
                        break;

        default :  cout<<"You entered wrong button"<<endl;
                        break;
    }
    
    
}
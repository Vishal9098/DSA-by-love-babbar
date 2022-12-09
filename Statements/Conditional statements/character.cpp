#include<iostream>
using namespace std;

int main(){

    int ch;
    cout<<"Enter a character = "<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"This is Uppercase "<<ch<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"This is Lowercase "<<ch<<endl;
    }
    else {
        cout<<"This is Numeric "<<ch<<endl;
    }
    return 0;
}
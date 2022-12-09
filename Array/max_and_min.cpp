#include<iostream>
using namespace std;

int main(){
    int a[5];
    int i;
    cout<<"Enter a array = ";
    for(i = 0; i<=5; i++){
        cin>>a[i];
    }
    int max = a[0];
    int min = a[0];
    for(i = 0; i<=5; i++){
        if(a[i] > max){
            max = a[i];
        }
    if(a[i] < min){
        min = a[i];
    }
    }
    
    cout<<"Maximum = "<<max<<endl;
    cout<<"Minimum = "<<min;

    return 0;
}


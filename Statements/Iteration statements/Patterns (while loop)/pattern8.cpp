/* same row increasing column
    same no.*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        /* code */
        int j = 1;
        while(j<=i)
        {
        cout<<i<<" " ;
        j++;
        }
        
    cout<<endl;
    i++;
    }
    
}
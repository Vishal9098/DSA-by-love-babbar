/* same row same column
    Pattern
    _ _ _ *
    _ _ * *
    _ * * *
    * * * *  */


#include<iostream>
 using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while (i<=n)
    {
        /* code */
        int space = n-i;
        while (space)
        {
            /* code */
            cout<<" ";
            space = space - 1;
        
        }
        int j = 1;
        while (j<=i)
        {
            /* code */
            cout<<"*";
            j = j+1;
        }
        cout<<endl;
        i= i+1;
        
    }
    
}


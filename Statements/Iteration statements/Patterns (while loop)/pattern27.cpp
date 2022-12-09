/* same row same column
    Pattern

    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1 
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1     */

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int count = 1;
         int j=n;
        while (j>=i)
        {
            /* code */
            cout<<count<<" ";
            count = count + 1; 
            j--;
        }
            j=n;
            int space = 1;
            while (space<=2*i-2)
            {
                /* code */
                cout<<"*"<<" ";
                space++;
            }
            while(j>=i)
            {
                cout<<j-i+1<<" ";
                j--;
            }
        cout<<endl;
        i++;
    }
    
}
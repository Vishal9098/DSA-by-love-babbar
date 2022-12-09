/* same row same column
    Pattern
 
          1
        2 2
      3 3 3
    4 4 4 4  */

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;

    while (i<=n)
    {
        /* code */
        int space = n-i;
        while (space)
        {
            /* code */
            cout<<" ";
            space--;
        }
        int j=1;
        while (j<=i)
        {
            /* code */
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
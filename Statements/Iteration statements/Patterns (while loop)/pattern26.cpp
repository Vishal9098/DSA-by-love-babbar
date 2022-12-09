/* same row same column
    Pattern
 
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1    */

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
   int count = 1;
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
            cout<<j;
            j++;
        }
        int start = i-1;
        while (start)
        {
            /* code */
            cout<<start;
            start--;
        }
        
        cout<<endl;
        i++;
    }
    
}
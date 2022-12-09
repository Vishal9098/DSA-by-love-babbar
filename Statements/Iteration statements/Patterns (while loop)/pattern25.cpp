/* same row same column
    Pattern
 
          1
        2 3
      4 5 6
    7 8 9 10  */

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
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
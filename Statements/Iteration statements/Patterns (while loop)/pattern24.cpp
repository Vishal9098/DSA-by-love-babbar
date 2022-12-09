/* same row same column
    Pattern
 
    1 2 3 4 
      2 3 4
        3 4
          4  */

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i = 1;
  
    while (i<=n)
    {
          int count = i;
        int space = 1;
           while (space<=i-1)
        {
            /* code */
            cout<<" ";
            space++;
        }
        int j=n;
        while (j>=i)
        {
            /* code */
            cout<<count;
            count++;
            j--;
        }
        cout<<endl;
        i++;
    }
    
}
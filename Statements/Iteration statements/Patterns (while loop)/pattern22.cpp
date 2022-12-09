/* same row same column
    Pattern

    1 1 1 1 
    _ 2 2 2 
    _ _ 3 3 
    _ _ _ 4     */


#include<iostream>
 using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;

    while (i<=n)
    {
         int space = 1;
            while (space<=i-1)
        {
            /* code */
            cout<<" ";
            space = space + 1;
        
        }
      int j = n;
        while (j>=i)
        {
            /* code */
            
            cout<<i;
            j--;
        }
        cout<<endl;
        i= i+1;
        
    }
    
}


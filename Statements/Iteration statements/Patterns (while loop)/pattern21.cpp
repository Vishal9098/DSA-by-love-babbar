/* same row same column
    Pattern

    * * * * 
    _ * * *
    _ _ * *
    _ _ _ *      */


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
            
            cout<<"*";
            j--;
        }
        cout<<endl;
        i= i+1;
        
    }
    
}


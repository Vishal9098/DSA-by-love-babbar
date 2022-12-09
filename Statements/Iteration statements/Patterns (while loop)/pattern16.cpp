/* same row increasing column
    alphabet series */

#include<iostream>
 using namespace std;

int main(){

    int n;
    cin>>n;

    char ch = 'A';
  
    int i=1;
    while (i<=n)
    {
        /* code */
        int j=1;
        while (j<=i)
        {
            /* code */
            cout<<ch<<" ";
            ch = ch + 1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
    
} 
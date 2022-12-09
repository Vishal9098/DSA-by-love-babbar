/*same row same columns
    pattern
    A B C D
    B C D E
    C D E F
    D E F G*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
 
    int i = 1;

    while(i<=n)
    {
        /* code */
        int j=1;
        while(j<=n)
        {
        char ch = 'A'+i+j-2;
        cout<<ch<<" ";
        j++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}
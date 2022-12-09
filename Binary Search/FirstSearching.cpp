#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){

     int start = 0;
     int end = size-1;

     /* int mid = (start + end)/2;    (But in this mid term the range of array is 
                                        greater and in some cases the program fails. )  */
        
        int mid = start + (end-start)/2;
    
    while (start<=end)
    {
        if(arr[mid] == key){
            return mid;
        }
        //right path
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        //Left path
        else{
            end = mid - 1;
        }
         int mid = start + (end-start)/2;
    }
    return -1;
}

int main(){

    int even[6] = {2,4,6,8,10,12};
    int odd[6] = {1,3,5,7,9,11};

    int evenIndex = binarysearch(even,6,12);
    cout<<"Index of 12 array = "<<evenIndex<<endl;

    int oddIndex = binarysearch(odd,6,9);
    cout<<"Index of 9 array = "<<oddIndex;

    return 0;
}
#include<iostream>
using namespace std;

int init(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start<=end){
        if(arr[mid] == key){
        ans = mid;
        end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
  mid = start + (end-start)/2;     
    }
    return ans;
}

int last(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start<=end){
        if(arr[mid] == key){
        ans = mid;
        start = start + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
  mid = start + (end-start)/2;     
    }
    return ans;
}

int main()
{
    int n[5] = {1,2,3,4,5};
    int first = init(n,5,1);
    int second = last(n,5,5);

    cout<<"Index of 1 array = "<<first<<endl;
    cout<<"Index of 1 array = "<<second;
    return 0;
}
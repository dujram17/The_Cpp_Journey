#include<iostream>
using namespace std;
int binarySearch(int *arr,int n,int key){
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]==key){
            return mid;

        }
        else if(arr[mid]<key){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return 0;
}
int main(){
    int arr[] = {4,2,5,7,9,5,32,67,45,78,45,32};
    int n = sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr,n,45);


    return 0;
}
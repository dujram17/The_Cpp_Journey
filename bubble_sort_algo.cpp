#include<iostream>
using namespace std;

void print(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int *arr,int n){
    for(int i = 0;i<n;i++){
        int isswap = false;
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(!isswap){
            break;
        }
    }
    print(arr,n);
}
int main(){
    int arr[] = {3,5,2,7,8,4};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);

    return 0;
}
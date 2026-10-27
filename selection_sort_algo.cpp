#include<iostream>
using namespace std;

void print(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int *arr,int n){
    for(int i = 0;i<n-1;i++){
        int minIdx = i;
        for(int j = i+1;i<n;i++){
            if(arr[j]<arr[minIdx]){
                minIdx = j;

            }
            swap(arr[i],arr[minIdx]);
        }
    }
    print(arr,n);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);

    return 0;
}
#include<iostream>
using namespace std;
void merge(int *arr1,int *arr2,int n,int m){
    for(int i = 0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    for(int i = 0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<m;i++){
        cin>>arr2[i];
    }
    merge(arr1,arr2,n,m);

    return 0;
}
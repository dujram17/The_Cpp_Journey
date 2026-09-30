#include<bits/stdc++.h>
using namespace std;
void duplicate(int *arr,int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate Value:"<<arr[i]<<endl;
                break;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    duplicate(arr,n);
    return 0;
}
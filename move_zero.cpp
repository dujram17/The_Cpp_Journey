#include<bits/stdc++.h>
using namespace std;
void moveZero(int *arr,int n){
  int k = 0;
  for(int i = 0;i<n;i++){
    if(arr[i]!= 0){
        swap(arr[i],arr[k]);
        k++;
    }
  }
  for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    moveZero(arr,n);
}
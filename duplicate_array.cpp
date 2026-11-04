#include<iostream>
using namespace std;
void duplicate(int *arr,int n){
    int duplicate;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate = arr[i];
                cout<<duplicate<<""<<endl;
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
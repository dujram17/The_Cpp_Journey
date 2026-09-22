#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    int secondmin = arr[0];
    for(int i = 0;i<n;i++){
        if(min>arr[i]){
            secondmin = min;
            min = arr[i];
        }
        else if(arr[i]<secondmin){
            secondmin = arr[i];
        }
    }
    cout<<"Second Minimum Array:"<<secondmin<<endl;
    return 0;
}
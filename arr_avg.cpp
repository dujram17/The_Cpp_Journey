#include<iostream>
using namespace std;
int main(){
    int n,avg , sum = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    avg = sum/n;
    cout<<"Avg of array:"<<avg;
   


    return 0;
}
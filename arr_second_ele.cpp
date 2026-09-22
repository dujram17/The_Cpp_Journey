#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    int secondmax = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            secondmax = max;
            max = arr[i];
        }
        else if(arr[i]>secondmax){
            secondmax = arr[i];
        }
    }
    cout<<"Secondmax of arr:"<<secondmax<<endl;

    return 0;
}
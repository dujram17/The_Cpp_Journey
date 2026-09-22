#include<iostream>
using namespace std;

int majorityElement(int *arr,int n){
    for(int i = 0;i<n;i++){
        int count = 0;

        for(int j = 0;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
    }

    return -1;
}

int main(){

    int arr[] = {1,2,3,1,5,3,7,8,4,9};

    int n = sizeof(arr)/sizeof(int);

    int result = majorityElement(arr,n);
    
    if(result != -1){
        cout<<"Majority Element : "<<result<<endl;
    }
    else{
        cout<<"No Majority Element"<<endl;
    }

    return 0;
}
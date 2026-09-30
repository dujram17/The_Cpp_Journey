#include<bits/stdc++.h>
using namespace std;
int linearSearch(int *arr,int n,int key){
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            
          cout<<"Key:"<<i<<endl;
           break;
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
    int key;
    cin>>key;
    linearSearch(arr,n,key);

    return 0;
}

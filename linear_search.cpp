#include<iostream>
using namespace std;
int linearSearch(int *arr,int n,int key){
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }

}
int main(){
    int arr[] = {6,3,1,5,7,9,0,4};
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,n,4);

    return 0;
}
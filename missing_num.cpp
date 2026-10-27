#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arrsum = 0;
    int sum = 0;
    int missing;
    for(int i = 0;i<n-1;i++){
        int x;
        cin>>x;
        arrsum += x;
    }
    sum = n*(n+1)/2;
    missing = sum-arrsum;
    cout<<missing<<" ";

    return 0;
}
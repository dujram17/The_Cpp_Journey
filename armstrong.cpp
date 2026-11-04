#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int original = n;
    while(n>0){
        int lastdigit = n%10;
         sum += lastdigit*lastdigit*lastdigit;
         n = n/10;
    }
    if(sum==original){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstron Number";
    }
    return 0;
}
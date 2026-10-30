#include<iostream>
#include<string>
using namespace std;
int tilingProblem(int n){ // 2*n
    if(n==0 || n==1){
        return 1;
    }

    return tilingProblem(n-1)+tilingProblem(n-2);

}
int main(){
    int n = 3;
    cout<<tilingProblem(3)<<endl;
    return 0;

}
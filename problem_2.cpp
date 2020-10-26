#include<bits/stdc++.h>
using namespace std;
int main(){
    int oldNum,newNum,fibNum,maxNum,sum=0;
    maxNum=4000000;
    oldNum=0;
    newNum=1;
    fibNum=oldNum+newNum;
    cout<<"Fib sequence: "<<oldNum<<" "<<newNum;
    while(fibNum<=maxNum){
        cout<<" "<<fibNum;
        oldNum=newNum;
        newNum=fibNum;
        fibNum=oldNum+newNum;
        if(fibNum%2==0){
            sum+=fibNum;
        }
    }
    cout<<"\n";
    cout<<sum<<"\n";
}
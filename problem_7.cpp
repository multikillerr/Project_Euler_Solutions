#include<bits/stdc++.h>
using namespace std;
int main(){
    uint64_t num=4;
    int count=2;
    for(;;){
        if(num%2!=0 & num%3!=0 & num%5!=0){
            ++count;
            cout<<count;
        }
        if(count==10001){
            cout<<num;
        }
    }
}
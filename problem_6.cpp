#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0,additional_sum=0,sum_square;
    for(int i=1;i<=100;i++){
        sum+=i*i;
        additional_sum+=i;
    }
    cout<<(additional_sum*additional_sum)-sum;
}
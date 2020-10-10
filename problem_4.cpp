#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int i,j,number;
    string palindrome,num,rev;
    for(i=101;i<=999;i++){
        for(j=101;j<=999;j++){
            number=i*j;
            num=to_string(number);
            rev=num;
            reverse(rev.begin(),rev.end());            
            if(rev==num){
                palindrome=rev;
            }
        }
        
    }
    cout<<num;
    cout<<palindrome;
}

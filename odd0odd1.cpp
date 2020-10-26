//odd 0 odd 1 linear time solution O(n) time complexity and O(1) space complexity.
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string input;
    cout<<"Enter a string of 0s and 1s\n";
    cin>>input;
    int count1=0;
    int count0=0;
    for(int i=0;i<input.size();i++){
        if(input[i]!='1' || input[i]!='0'){
            cout<<"Poof !! Magic happened, you are dumb\n";
            exit(1);
        }
        else if(input[i]=='0'){
            count0++;
        }
        else if(input[i]=='1'){
            count1++;
        }
        
    }
    //cout<<count0<<" "<<count1<<'\n';
    if(count0%2==0 && count1%2==0){
        cout<<"Not Accepted\n";
    }
    else{
        cout<<"Accepted\n";
    }
    return 0;
}
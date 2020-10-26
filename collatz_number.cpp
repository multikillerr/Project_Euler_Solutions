#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    vector <int> vect;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    if(n==1 || n==0){
        vect.push_back(n);
    }
    else{
        vect.push_back(n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
            vect.push_back(n);
        }
        else if(n%2!=0){
            n=(3*n)+1;
            vect.push_back(n);
        }
    }
    }
    vector <int>:: iterator itr;
    for(itr=vect.begin();itr!=vect.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<"\n";
    return 0;
}
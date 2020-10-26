#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main(){
    int sum=0;
    clock_t start,end;
    double cpu_time_used;
    start=clock();
    for(int i=1;i<1000;i++){
        if(i%3==0 || i%5==0){
           sum+=i ;
        }
        
    }
    end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    cout<<sum<<" "<<"Time taken "<<cpu_time_used<<"\n";
}

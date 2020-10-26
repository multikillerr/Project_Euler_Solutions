#include<execinfo.h>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void print_trace(void){
    void *array[10];
    size_t size;
    char **strings;
    size_t i;
    size=backtrace(array,10);
    strings=backtrace_symbols(array,size);
    cout<<"Obtained trace from "<<size<<" stack frames\n";
    for(i=0;i<size;i++){
        cout<<strings[i]<<"\n";
    }
    free(strings);
}
void dummy_function(void){
    print_trace();
}
int main(){
    dummy_function();
    return 0;
}
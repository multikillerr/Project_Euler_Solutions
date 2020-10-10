#include <iostream>

int main()
{
    uint64_t i;
    uint64_t n = 600851475143;

    for(i=3;i<=n;i+=2){
        while(n%i==0){
            n/=i;
        }

        if (n == 1){
        break;
        }
    }

    std::cout<< i;
}
#include<iostream>
int main(int argc, char **argv){
    std::cout<<std::max(std::atoi(argv[1]),std::atoi(argv[2]))<<"\n";
    double dep=((std::atof(argv[1]))/100);
    std::cout<<"\n"<<dep;

}
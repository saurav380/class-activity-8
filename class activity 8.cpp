#include <iostream>

int main(){
    int x=10;
    int y=3;

    double z=static_cast<double>(x)/y;

    std::cout <<z<<std::endl;

    return 0;

}
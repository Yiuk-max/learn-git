#include <iostream>
#include <vector>
#include <algorithm>

void test_01(){
    std::cout<<"please enter an integer:"<<std::endl;
    int value;
    std::cin>>value;
    if(value < 0){
        std::cerr<<"invalid value!"<<std::endl;
        std::clog<<"test_01()=========="<<std::endl;
        std::cin>>value;
        return;
    }
    //std::cerr<<"test_01()=========="<<std::endl;

}
void test_02(){
    unsigned int value;
    std::cout<<"please enter an unsigned integer:"<<std::endl;
    std::cin>>value;
    std::cout<<"you have entered:"<<value<<std::endl;
}
void test_03(){
    unsigned int u=10,u2=42;
    std::cout<<u2 - u<<std::endl;//32
    std::cout<<u - u2<<std::endl;
    int i=10,i2=42;
    std::cout<<i2 - i<<std::endl;//32
    std::cout<<i - i2<<std::endl;//-32
    std::cout<<i - u<<std::endl;//0
    std::cout<<u - i2<<std::endl;//4294967264
    unsigned int u3=-1;
    std::cout<<u3<<std::endl;//4294967295
}
//main function
//========================================================================
int main(){
    test_03();


    return 0;
}
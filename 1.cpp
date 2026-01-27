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
int main(){
    test_01();
    system("pause");

    return 0;
}
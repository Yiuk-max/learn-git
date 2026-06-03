#include "main.hpp"
//test functions

//signed int input test
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
//unsigned int input test
void test_02(){
    unsigned int value;
    std::cout<<"please enter an unsigned integer:"<<std::endl;
    std::cin>>value;
    std::cout<<"you have entered:"<<value<<std::endl;
}
//unsigned and signed int operation test
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
//constexpr test
void test_04(){
    constexpr double cm_per_inch=2.54;
    double length=0;
    std::cout<<"please enter a length in inches:"<<std::endl;
    std::cin>>length;
    std::cout<<length<<" inches = "<<cm_per_inch*length<<" centimeters."<<std::endl;

}
//namespace decltype test
void test_05(){
    int ci = 0,&cj = ci;
    decltype(ci) x = 0;

    decltype(cj) y = x;
    y=42;
    std::cout<<"ci="<<ci<<",cj="<<cj<<",x="<<x<<",y="<<y<<std::endl;//ci=42,cj=42,x=42,y=42
}
//namespace test======================================================
void test_06(){
    mynaspace::func();
    mynaspace::mynasp2::func();
    // using mynaspace::func;
}
void test_07(){
    using std::string;
    string s ;
    std::cout<<"please enter a string:"<<std::endl;
    getline(std::cin,s);
    std::cout<<s<<std::endl;

    if(s.empty()){
        std::cerr<<"you entered an empty string!"<<std::endl;
    }
    
}
//exception test
class DivideByZeroException : public std::exception {
public:
    std::string warning;
    std::string info;
    std::string getWarning() const {
        return warning+": "+info;
    }
    DivideByZeroException(){};
    DivideByZeroException(const std::string& warn,const std::string& inf) : warning(warn),info(inf){

    };

    const char* what() const noexcept override {
        return  getWarning().c_str();
    }
};
double divide(double a,double b){
    if(b==0){
        //throw std::runtime_error("division by zero!");
        //throw std::runtime_error("Error: Division by zero");
        throw DivideByZeroException("Error","Division by zero");
    }
    return a/b;
}
void test_08(){
    int a=10;
    int b=0;
    try{
        double c=divide(a,b);
        std::cout<<"a/b="<<c<<std::endl;
    }
    catch(const DivideByZeroException &e){
        std::cerr<<"Caught an exception: \x1b[31m"<<e.what()<<"\x1b[0m "<<std::endl;
    }
    catch(...){
        throw; 
    }
}
//==========================================================================
std::string &test_09(){
    static std::string str="Hello, World!";
    return str;
}

std::vector<std::string> test_10(){
    return {"one","two","three"};

}
//函数指针
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
std::vector<int(*)(int, int)> vecptr;
void test_11(){
    vecptr.push_back(add);
    vecptr.push_back(sub);
    for(const auto &func : vecptr){
        std::cout<<func(10,5)<<std::endl;
    }
}
void test_13(){
    std::vector<std::string> vec={"apple","banana","cherry"};
    for(const auto &s : vec){
        std::cout<<s<<" ";
    }
    std::cout<<std::endl;
}
//==============================main========================================

int main(){
    //system("color 0D");
    // test_01();
    // test_02();
    // test_03();
    // test_04();
    // test_05();
    // test_06();
    // test_07();
    // test_08();

    // std::string ref=test_09();
    // std::cout<<"ref="<<ref<<std::endl;//ref=42 but ref

    // std::vector<std::string> vec=test_10();
    // for(const auto &s : vec){
    //     std::cout<<s<<" ";
    // }
    // std::cout<<std::endl;

    test_11();

    std::cin.get();
    return EXIT_SUCCESS;
}
//45644646464642316574985498
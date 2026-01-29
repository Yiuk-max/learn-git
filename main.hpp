#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
namespace mynaspace {
    void func() {
        std::cout << "Hello from mynamespace!" << std::endl;
    }
    namespace mynasp2{
        void func() {
            std::cout << "Hello from mynasp2 namespace!" << std::endl;
        }
    }
}
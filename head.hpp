#include  <iostream>
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
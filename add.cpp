#include <iostream>
#include <cstdlib>

// simple addition, kept in the style of the other practice files
int add(int a, int b) { return a + b; }

int main(int argc, char **argv) {
    if (argc == 3) {
        std::cout << add(std::atoi(argv[1]), std::atoi(argv[2])) << std::endl;
        return 0;
    }
    int a = 0, b = 0;
    std::cout << "please enter two integers:" << std::endl;
    if (!(std::cin >> a >> b)) {
        std::cerr << "invalid input" << std::endl;
        return 1;
    }
    std::cout << a << " + " << b << " = " << add(a, b) << std::endl;
    return 0;
}
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    int a{};
    std::cout << "Small Number: ";
    std::cin >> a;

    int b{};
    std::cout << "Big Number: ";
    std::cin >> b;

    if (a > b) {
        std::cout << "You made a wrong input!" << std::endl;
    } else {
        int sum = 0;
        for (int i = a; i <= b; ++i) {
            sum += i;
        }
        std::cout << "Sum from " << a << " to " << b << " is: " << sum << std::endl;
    }

    return 0;
}
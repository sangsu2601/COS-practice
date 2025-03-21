#include <iostream>

int main (int argc, char *argv[])
{
	int x{};
    std::cout << "Enter a number: ";
    std::cin >> x;

    if (x>=0){
        std::cout << "You enterd a positive integer!" << std::endl;
    } else{
        std::cout << "You enterd a negative integer!" << std::endl;
    }

    return 0;
}

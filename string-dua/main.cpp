#include <iostream>
#include <string>

int main()
 {
    std::string input;

    std::cout << "Masukan sebuah string: ";
    std::getline(std::cin, input);

    std::string reversed = std::string(input.rbegin(), input.rend());

    std::cout << "String yang dibalik adalah: " << reversed << std::endl;
    return 0;
}


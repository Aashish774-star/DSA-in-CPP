#include <iostream>
#include <bitset>

int main() {
    int number = 99;  // Example number
    std::bitset<32> binary(number);  // 32 bits is a common size; adjust as needed
    std::cout << "Binary representation of " << number << " is: " << binary << std::endl;
    return 0;
}

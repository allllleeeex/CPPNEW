#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {42, -4, 0, -101, 23};
    std::vector<int> reversed;
    int vector_length = numbers.size();
    for (int i = vector_length - 1; i >= 0; i--) {
      reversed.push_back(i)
        }
      
      
    std::cout << "Reversed Numbers:\n";
    for (int num: reversed) {
        std::cout << num << ' ';
    }

    return 0;
}

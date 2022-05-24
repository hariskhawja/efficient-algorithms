#include <iostream>
#include <string>
#include <vector>

void quickSort(std::vector<int> &vect) {

    for(int i = 0; i < vect.size(); i++) {

        std::cout << vect[i] << std::endl;

    }

    vect.push_back(69);
    
}

int main() {

    std::string text;

    std::vector<int> vect;

    std::getline(std::cin, text);

    //quickSort(vect);

    return 0;
}
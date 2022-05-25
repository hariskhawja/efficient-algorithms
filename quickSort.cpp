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

    for(int part = 0; part < text.size(); part++) {

        std::string num = "";

        if(isspace(text[part])) {
            //std::cout << std::stoi(num) << std::endl;
            std::cout << text[part] << std::endl;
            int x = std::stoi(num);
            std::cout << x << std::endl;
            vect.push_back(x);
        }

        else {
            std::cout << text[part] << std::endl;
            num += text[part];
            std::cout << "NUM: " << num << std::endl;
        }

    }

    for(int i = 0; i < vect.size(); i++) {

        std::cout << vect[i];

    }

    return 0;
}
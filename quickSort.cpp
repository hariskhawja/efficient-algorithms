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

    std::string num = "";

    for(int part = 0; part < text.size(); part++) {

        if(isspace(text[part])) {
            //std::cout << text[part] << std::endl;
            int x = std::stoi(num);
            //std::cout << x << s\td::endl;
            vect.push_back(x);
            num = "";
        }

        else {
            //std::cout << text[part] << std::endl;
            num += text[part];
            //std::cout << "NUM: " << num << std::endl;
        }

    }

    std::cout << vect.size() << std::endl;

    for(int i = 0; i < vect.size(); i++) {

        std::cout << vect[i] << std::endl;

    }

    return 0;
}
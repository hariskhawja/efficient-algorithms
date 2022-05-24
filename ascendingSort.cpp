#include <iostream>
#include <vector>

void ascendingSort(std::vector<int>* vect) {

    vect->push_back(2);
    
}

int main() {

    std::vector<int> vect = {2, 3, 4, 5, 6, 7};

    ascendingSort(vect);

    return 0;
}
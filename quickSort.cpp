#include <iostream>
#include <string>
#include <vector>

void quickSort(std::vector<int> &vect) {

    int pivot = vect[vect.size() - 1];
    int prevNum;

    for(int num = 0; num < vect.size(); num++) {

        if(vect[num] > pivot) {

            prevNum = num;

            // 2, 4, 5, 6, 7, 8, 9

        }

        else {

            

        }

    }
    
}

int main() {

    std::vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    quickSort(vect);

    return 0;
}
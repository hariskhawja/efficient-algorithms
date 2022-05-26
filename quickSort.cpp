#include <iostream>
#include <string>
#include <vector>

void quickSort(std::vector<int> &vect) {

    int pivot = vect[vect.size() - 1];
    int savedNum;

    for(int num = 0; num < vect.size(); num++) {

        if(pivot > num) {



        }

        else {

            if(num < savedNum) {
                savedNum = num;
            }

        }

    }
    
}

int main() {

    std::vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    quickSort(vect);

    return 0;
}
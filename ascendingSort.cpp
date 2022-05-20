#include <iostream>
#include <list>

void ascendingSort(int* test) {

    /*
    for(int round = 0; round < sizeof(&array) / sizeof(&array[0]); round++) {

        for(int element = 0; round < sizeof(&array) / sizeof(&array[0]); element++) {
            break;
        }

    }
    */


   *test += 1;

   std::cout << *test;
   std::cout << test;
}

int main() {

    int array[] = {2, 3, 4, 5, 6, 7};

    int test = 51;

    ascendingSort(&test);

    return 0;
}
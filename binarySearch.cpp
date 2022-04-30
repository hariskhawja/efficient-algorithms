#include <iostream>
#include <bits/stdc++.h>

/*
int binarySearch(int numbers[], int target) {
    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        if(numbers[i] == target) {
            return i;
        }
    }
    return 0;
}
*/

int main() {

    int nums[] = {5, 2, 14, 5, 6, 2, 6, 7};
    int target = 5;
    std::sort(nums, nums + sizeof(nums) / sizeof(nums[0]));

    //std::cout << binarySearch(nums, target);

    return 0;
}
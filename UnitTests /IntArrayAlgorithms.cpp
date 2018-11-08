#include "IntArrayAlgorithms.hpp"
#include "IntArray.hpp"

void IntArrayAlgorithms::swap(IntArray & lhs, IntArray & rhs) {
    int* firstArray = lhs.ptr();
    lhs.ptr() = rhs.ptr();
    rhs.ptr() = firstArray;
}

bool IntArrayAlgorithms::contains(const IntArray & arr, int val) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == val) {
            return true;
        }
    }
    return false;
}

void IntArrayAlgorithms::sort(IntArray & arr) {
    // TODO
}

int IntArrayAlgorithms::sum(const IntArray & arr) {
    if (arr.size() == 0) {
        return 0;
    } else {
        int sum = 0;
        for(int i = 0; i < arr.size(); i++) {
            sum+= arr[i];
        }
        return sum;
    }
}

int IntArrayAlgorithms::product(const IntArray & arr) {

    int product = 1;
    for(int i = 0; i < arr.size(); i++) {
        product *= arr[i];
    }
    return product;

}

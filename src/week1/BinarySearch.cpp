//
// Created by trujillo on 03/11/16.
//

#include "BinarySearch.h"

BinarySearch::BinarySearch() {}

int BinarySearch::binarySearch(std::vector<int> a, int key) {
    int lo = 0, hi = a.size();

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(key < a[mid]) hi= mid - 1;
        else if (key > a[mid]) lo = mid + 1;
        else return mid;
    }
    return -1;
}

//
// Created by trujillo on 07/11/16.
//

#include "FixedCapacityOfStrings.h"

FixedCapacityOfStrings::FixedCapacityOfStrings(int capacity) : N(capacity) {
    // The smart pointer now points to the first element of an array of capacity N
    N = capacity;
    arrayOfPointersToString = new std::string*[capacity];
}

FixedCapacityOfStrings::~FixedCapacityOfStrings() {
    delete[] arrayOfPointersToString;
}

bool FixedCapacityOfStrings::isEmpty() {
    return N == 0;
}

void FixedCapacityOfStrings::push(std::string & item) {
    arrayOfPointersToString[N++] = &item;
}

std::string FixedCapacityOfStrings::pop() {
    std::string item = *arrayOfPointersToString[--N];
    arrayOfPointersToString[N] = nullptr;
    return item;
}


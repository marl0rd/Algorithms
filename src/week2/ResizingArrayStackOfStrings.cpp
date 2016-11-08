//
// Created by trujillo on 07/11/16.
//

#include "ResizingArrayStackOfStrings.h"

ResizingArrayStackOfStrings::ResizingArrayStackOfStrings() {
    // The smart pointer now points to the first element of an array of capacity N
    N = 1;
    s = new std::string*[N];
}

void ResizingArrayStackOfStrings::push(std::string item) {
    if(N == (*s)->length()) resize(2*(*s)->length());
    (*s)[N++] = item;
}

std::string ResizingArrayStackOfStrings::pop() {
    std::string item = (*s)[--N];
    (*s)[N] = nullptr;
    return item;
}

void ResizingArrayStackOfStrings::resize(unsigned int newCapacity) {
    auto copy = new std::string * [newCapacity];
    for(int i = 0; i < N; i++)
        copy[i] = s[i];
    s = copy;
}


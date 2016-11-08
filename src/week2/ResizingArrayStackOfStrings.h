//
// Created by trujillo on 07/11/16.
//

#ifndef ALGORITHMS_RESIZINGARRAYSTACKOFSTRINGS_H
#define ALGORITHMS_RESIZINGARRAYSTACKOFSTRINGS_H

#include <memory>
#include <string>

class ResizingArrayStackOfStrings {
    // Smart pointer, pointing to an array of string pointers
    std::string ** s;
    int N;
public:
    ResizingArrayStackOfStrings();
    void push(std::string item);
    std::string pop();

    void resize(unsigned int i);
};


#endif //ALGORITHMS_RESIZINGARRAYSTACKOFSTRINGS_H

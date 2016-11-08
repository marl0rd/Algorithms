//
// Created by trujillo on 07/11/16.
//

#ifndef ALGORITHMS_FIXEDCAPACITYOFSTRINGS_H
#define ALGORITHMS_FIXEDCAPACITYOFSTRINGS_H

#include <memory>
#include <string>

class FixedCapacityOfStrings {

    /* S is a pointer to an array of ten pointers to int. Explication:
     * int *ptrs[10];            //  ptrs is an array of ten pointers to int
     * int &refs[10] = X         //  error: no arrays of references
     * int (*Parray)[10] = &arr; //  Parray points to an array of ten ints
     * */
    std::string ** arrayOfPointersToString;
    int N;

public:
    FixedCapacityOfStrings(int N);
    ~FixedCapacityOfStrings();

    bool isEmpty();
    void push(std::string & item);
    std::string pop();
};


#endif //ALGORITHMS_FIXEDCAPACITYOFSTRINGS_H

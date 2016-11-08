//
// Created by trujillo on 07/11/16.
//

#ifndef ALGORITHMS_LINKEDSTACKOFSTRINGS_H
#define ALGORITHMS_LINKEDSTACKOFSTRINGS_H

#endif //ALGORITHMS_LINKEDSTACKOFSTRINGS_H

#include <string>
#include <memory>

class LinkedStackOfStrings{

    class Node{
    public:
        std::string item;
        std::unique_ptr<Node> next;
    };

    std::unique_ptr<Node> first;

public:
    bool isEmpty();
    void push(std::string item);
    std::string pop();
};
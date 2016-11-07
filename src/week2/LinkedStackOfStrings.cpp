//
// Created by trujillo on 07/11/16.
//

#include "LinkedStackOfStrings.h"
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
    bool isEmpty(){
        return first == nullptr;
    }

    void push(std::string item){
        auto oldFirst = std::move(first);
        first.reset(new Node());
        first->item = item;
        first->next = std::move(oldFirst);
    }

    std::string pop(){
        std::string item = first->item;
        first = std::move(first->next);
        return item;
    }
};
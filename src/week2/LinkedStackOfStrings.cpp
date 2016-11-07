//
// Created by trujillo on 07/11/16.
//

#include "LinkedStackOfStrings.h"

bool LinkedStackOfStrings::isEmpty(){
    return first == nullptr;
}

void LinkedStackOfStrings::push(std::string item){
    auto oldFirst = std::move(first);
    first.reset(new Node());
    first->item = item;
    first->next = std::move(oldFirst);
}

std::string LinkedStackOfStrings::pop(){
    std::string item = first->item;
    first = std::move(first->next);
    return item;
}

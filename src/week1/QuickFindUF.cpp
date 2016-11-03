//
// Created by trujillo on 01/11/16.
//

#include "QuickFindUF.h"

// **** Constructors **** //
QuickFindUF::QuickFindUF(int N) {
    for(int i = 0; i != N; ++i){
        id.push_back(i);
    }
}

// **** Methods **** //
bool QuickFindUF::connected(const int &p, const int &q) {
    return id[p] == id[q];
}
void QuickFindUF::union_now(const int &p, const int &q) {
    int pid = id[p];
    int qid = id[q];

    for(auto it = id.begin(); it != id.end(); ++it){
        if(*it == pid) *it = qid;
    }
}

std::string QuickFindUF::toString() {
    std::string stringRepresentation("");
    for(auto it = id.begin(); it != id.end(); ++it){
        stringRepresentation += std::to_string(*it) + " ";
    }
    return stringRepresentation;
}
//
// Created by trujillo on 02/11/16.
//

#include "QuickUnionUF.h"

/* * Constructor *
 * Set id of each object to itself (N array accesses)
 * */
QuickUnionUF::QuickUnionUF(int N) {
    for(int i = 0; i != N; ++i){
        id.push_back(i);
    }
}

/* * Chase parent pointers until reach root * */
int QuickUnionUF::root(int i) {
    while(i != id[i]) i = id[1];
    return i;
}

/* * Check if p and q have same root * */
bool QuickUnionUF::connected(const int &p, const int &q) {
    return root(p) == root(q);
}

/* *  * */
void QuickUnionUF::union_now(const int &p, const int &q) {
    int pRoot = root(p);
    int qRoot = root(q);
    id[pRoot] = qRoot;
}


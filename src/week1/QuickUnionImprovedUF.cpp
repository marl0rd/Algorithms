//
// Created by trujillo on 02/11/16.
//

#include "QuickUnionImprovedUF.h"

/* * Constructor *
 * Set id of each object to itself (N array accesses)
 * */
QuickUnionImprovedUF::QuickUnionImprovedUF(int N) {
    for(int i = 0; i != N; ++i){
        id.push_back(i);
        sz.push_back(1);
    }
}

/* * Chase parent pointers until reach root * */
int QuickUnionImprovedUF::root(int i) {
    while(i != id[i]) {
        id[i] = id[id[i]];
        i = id[1];
    }
    return i;
}

/* * Check if p and q have same root * */
bool QuickUnionImprovedUF::connected(const int &p, const int &q) {
    return root(p) == root(q);
}

/* *  * */
void QuickUnionImprovedUF::union_now(const int &p, const int &q) {
    int pRoot = root(p);
    int qRoot = root(q);

    if(pRoot == qRoot) return;

    // Do move depending on size
    if (sz[pRoot] < sz[qRoot]){
        // Move P to Q (roots)
        id[pRoot] = qRoot;
        sz[qRoot] += sz[pRoot];
    } else{
        // Move Q to P (roots)
        id[qRoot] = pRoot;
        sz[pRoot] += sz[qRoot];
    }
}
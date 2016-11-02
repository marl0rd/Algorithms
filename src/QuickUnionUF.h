//
// Created by trujillo on 02/11/16.
//

#ifndef ALGORITHMS_QUICKUNIONUF_H
#define ALGORITHMS_QUICKUNIONUF_H

#include <vector>

class QuickUnionUF {
    std::vector<int> id;
    int root(int i);
public:
    QuickUnionUF(int N);

    bool connected(const int & p, const int & q);
    void union_now(const int & p, const int & q);
};


#endif //ALGORITHMS_QUICKUNIONUF_H

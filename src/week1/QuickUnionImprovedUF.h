//
// Created by trujillo on 02/11/16.
//

#ifndef ALGORITHMS_QUICKUNIONIMPROVEDUF_H
#define ALGORITHMS_QUICKUNIONIMPROVEDUF_H

#include <vector>

class QuickUnionImprovedUF {
    std::vector<int> id;
    /* sz is an array to count number of objects in the three
     * rooted at i. This is the first improvement.
     * */
    std::vector<int> sz;
    int root(int i);
public:
    QuickUnionImprovedUF(int N);

    bool connected(const int & p, const int & q);
    void union_now(const int & p, const int & q);
};


#endif //ALGORITHMS_QUICKUNIONIMPROVEDUF_H

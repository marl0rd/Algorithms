//
// Created by trujillo on 01/11/16.
//

#ifndef ALGORITHMS_QUICKFINDUF_H
#define ALGORITHMS_QUICKFINDUF_H

#include <vector>
#include <string>

class QuickFindUF {
    std::vector<int> id;
public:
    QuickFindUF(int N);

    bool connected(const int & p, const int & q);
    bool union_now(const int & p, const int & q);

    std::string toString();
};

#endif //ALGORITHMS_QUICKFINDUF_H
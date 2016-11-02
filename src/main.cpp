#include <iostream>
#include "QuickFindUF.h"

int main() {
    QuickFindUF quickFindUF(10);
    std::cout << "QuickFind vector:" << quickFindUF.toString() << std::endl;
    return 0;
}
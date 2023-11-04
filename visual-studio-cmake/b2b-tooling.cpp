// b2b-tooling.cpp : Defines the entry point for the application.
//
#include "b2b-tooling.h"


#include <iostream>
#include <complex>
#include <vector>
#include <set>
#include <atomic>

template <typename Coll>

void add(auto& coll, const auto& val) {
    if constexpr (requires {coll.push_back(val); }) {
        coll.push_back(val);
    }
    else {
        coll.insert(val);
    }

}

int main() {
    std::vector<int> coll1;
    std::set<int> coll2;
    
    std::cout << "Hello CMake." << std::endl;
    
    add(coll1, 42);
    add(coll2, 43);

    return 0;
}

#include <iostream>
#include <inttypes.h>

#include <etl/vector.h>

void passMeAVector(etl::ivector<uint32_t>& vec) {
    // Do something with the vector
    vec.push_back(13);
    vec.push_back(14);
}

int main() {
    etl::vector<uint32_t, 6> vec;
    passMeAVector(vec);
    printf("Num. of things in vec is %lu, vec[0] is %u, capacity is %lu\n", vec.size(), vec[0], vec.capacity());
    return 0;
}



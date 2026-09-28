#include <iostream>
#include "ReadingBuffer.hpp"

int main() {
    std::cout << "Simulating 200000 sensor connections...\n";

    for (int i = 0; i < 200000; ++i) {
        ReadingBuffer buf;
        buf.init(1000);
        buf.push(21.5);
        buf.release();
    }

    std::cout << "Done. Check your memory usage before pressing Enter.\n";
    std::cin.get();
    return 0;
}
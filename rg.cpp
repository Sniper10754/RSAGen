#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <cstdint>
#include <vector>
#include <random>






using namespace std;
int main(int argc, char **argv) {
    std::random_device rd;
    std::uniform_int_distribution<uint32_t> dist(0,0xFFFFFFFFu);
    std::vector<char> data(1000);
    int offset = 0;
    uint32_t bits = 0;
    for (char& d : data)
    {
        if (offset == 0)
            bits = dist(rd);
        d = static_cast<char>(bits & 0xFF);
        bits >>= 8;
        if (++offset >= 4)
            offset = 0;
    }
    return 0;
}
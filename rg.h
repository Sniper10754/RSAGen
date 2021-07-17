#include <vector>
#include <random>
#include <climits>
#include <algorithm>
#include <functional>

using random_bytes_engine = std::independent_bits_engine<
    std::default_random_engine, CHAR_BIT, unsigned char>;

using namespace std;

int main() { 
    String data = "Hello World";
    random_bytes_engine rbe;
    std::vector<unsigned char> data(1000);
    std::generate(begin(data), end(data), std::ref(rbe));
    return 0;
}
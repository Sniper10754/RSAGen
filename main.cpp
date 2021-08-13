#include<iostream>
#include "rsa-gen/gen.h"

using namespace std;
using namespace rsa_gen;

int main() {
	try {
		string k = key();
		cout << k;
	} catch(const std::exception& e) {
		return 1;
	}
	return 0;
}

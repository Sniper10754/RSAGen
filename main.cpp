#include<iostream>
#include<conio.h>
#include<stdlib.h>

#include <string.h>
#include <cstdlib>
#include "rsa-gen/gen.h"

int main() {
	std::string key = rsa_gen::key();
	std::cout << key;

	return 0;
}

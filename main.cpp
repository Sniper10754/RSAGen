#include<iostream>
#include<conio.h>
#include<stdlib.h>

#include <string.h>
#include <cstdlib>
#include "rsa-gen/gen.h"

using namespace std;

int main(int argc, char **argv) {
    cout << rsa_gen::key();
}
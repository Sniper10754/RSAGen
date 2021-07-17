#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(int argc, char **argv) {
   int max_n = 100;
   int min_n = 1;
   char Hexadec_n[100];
   int new_n;
   int i;
   for (i = 0; i < 5; i++) {
      new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
      //rand() returns random decimal number.
      cout<<"The random number is: "<<new_n;
      itoa(new_n, Hexadec_n, 16); //converts decimal number to Hexadecimal number.
      cout << "\nEquivalent Hex Byte: "
      <<Hexadec_n<<endl<<"\n";
   }
   return 0;
}
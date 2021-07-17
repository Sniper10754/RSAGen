#include<iostream>
#include<conio.h>
#include<stdlib.h>



#include <string.h>
#include <cstdlib>






using namespace std;







int main(int argc, char **argv) {
    char p[81];
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i=0;i<=80;i++)
        p[i] = a[rand()%26];
    p[80] = '\0';
    cout<<p<<endl;
    return 0;
}
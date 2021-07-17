#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <string.h>
#include <cstdlib>
#include <stdio.h>
#include <time.h>

using namespace std;

namespace rsa_gen {

    string encrypt(string textp, int keyp) {
        string text;
        char temp;
        int i, key;
        key = keyp;
        text = textp;
        for(i = 0; text[i] != '\0'; ++i) {
            temp = text[i];
            if(temp >= 'a' && temp <= 'z'){
                temp = temp + key;

                if(temp > 'z'){
                    temp = temp - 'z' + 'a' - 1;
                }

                text[i] = temp;
            }
            else if(temp >= 'A' && temp <= 'Z'){
                temp = temp + key;

                if(temp > 'Z'){
                    temp = temp - 'Z' + 'A' - 1;
                }

                text[i] = temp;
                return text;
            }
        }
        return text;
    }

    int PBKEY = 2348237;
    string key() {
        int alg;
        int max = 120;
        int min = 40;

        srand ( time(NULL) );
        alg = rand() % max + min;
        
        char p[alg];
        char a[] = "abcdefghijklmnopqrstuvwxyz";
        for (int i=0;i<=alg;i++)
        
        p[i] = a[rand()%26];
        p[alg-1] = '\0';
        string PLK = encrypt(p, PBKEY);
        
        return PLK;
    }
}
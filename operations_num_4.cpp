#include "middle.h"

int itc_rev_oct_num(long long number){
    long long oct;
    oct = 0;
    int digits;
    digits = itc_len_num(number);
    for (int i = 0; i < digits; i++){
        oct = oct + (number % 10)* mypow(8, i);
        number = number / 10;}
    return oct;}
int itc_covert_num(long long number, int ss) {
    long long r = 1;
    while (number > 0) {
        r = r * 10 + (number % ss);
        number = number / ss;}
    return (itc_rev_num_support(r) / 10);}

int itc_rev_covert_num(long long number, int ss) {
    int r = 0;
    int k = 0;
    while (number > 0) {
        r = r + (number % 10) * mypow(ss,k);
        number = number / 10;
        k += 1;}
    return r;}

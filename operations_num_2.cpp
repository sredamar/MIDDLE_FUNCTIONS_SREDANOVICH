#include "middle.h"

int itc_min_num(long long number) {
    int minimum = 9;
if (number < 0) {
    number = number * (-1);
while (number > 0) {
        if ((number % 10) < minimum)
            minimum = number % 10;
    number = number / 10;}
    return minimum;
} else if ((number < 10) && (number >= 0)) {
    return number;}
}

int itc_rev_num(long long number) {
  int amount, length;
  amount = 0;
  length = 0;
if (number < 0) {
        number = number * (-1);
  while (number>0) {
    amount=amount*10+(number%10);
    length=length+1;
    number=number/10;}
  return itc_len_num(amount);
} else if ((number < 10) && (number >= 0)) {
    return 1;}
}

int itc_null_count(long long number) {
    int zero, i;
    zero = 0;
    while (number > 0) {
        i = number % 10;
        if (i == 0)
            zero++;
        number = number / 10;}
    return zero;}

bool itc_mirror_num(long long number) {
    long long a, b;
    a = mypow(10, itc_len_num(number) / 2 + 1) + number / mypow(10, itc_len_num(number) / 2 + itc_len_num(number) % 2) * 10 + 1;
    b = mypow(10, itc_len_num(number) / 2 + 1)+ (number % mypow(10, itc_len_num(number) / 2)) * 10 + 1;
    if (a == itc_rev_num_support(b))
        return "TRUE";
    else
        return "FALSE";}

int itc_mirror_count(long long number) {
  int r = 0;
  for (long long i=1 ; i <= number ; i++) {
    if (itc_mirror_num(i))
        r = r + 1;}
  return r;}

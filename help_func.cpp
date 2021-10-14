#include "middle.h"

long long mypow(long long x, long long y) {
    long long r = 1;
    while (y > 0) {
        r = r * x;
        y = y - 1;}
    return r;}

long long itc_rev_num_support(long long number) {
  long long r = 0;
  long long length = 0;
  while (number > 0) {
    r = r * 10 + (number % 10);
    length = length + 1;
    number = number / 10;}
  return r;}

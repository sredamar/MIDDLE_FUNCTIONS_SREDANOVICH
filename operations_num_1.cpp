#include "middle.h"

void itc_num_print(int number) {
    cout << number;}

int itc_len_num(long long number) {
long long digits = 0;
if (number > 0) {
  while (number > 0) {
    digits += 1;
    number = number / 10;}
  return digits;}
else if (number < 0) {
    number = number * (-1);
 while (number > 0) {
    digits += 1;
    number = number / 10;}
  return digits;}
else if (number == 0) {
    return 1;}
return 0;}

int itc_sum_num(long long number) {
int summa, i;
summa = 0;
if (number > 0) {
    while (number > 0){
        i = number % 10;
        summa = summa + i;
        number = number / 10;}
    return summa;
} else if (number < 0) {
    number = number * (-1);
    while (number > 0){
        i = number % 10;
        summa = summa + i;
        number = number / 10;}
    return summa;
} else if (number == 0) {
    return 0;}
return 0;}

long long itc_multi_num(long long number) {
    int multi, i;
    multi = 1;
if (number > 0) {
    while (number > 0) {
        i = number % 10;
        multi = multi * i;
        number = number / 10;}
    return multi;
} else if (number < 0) {
    number = number * (-1);
    while (number > 0) {
        i = number % 10;
        multi = multi * i;
        number = number / 10;}
    return multi;}
return 0;}

int itc_max_num(long long number) {
    int maximum;
    maximum = 0;
if (number > 0) {
        while (number > 0) {
        if ((number % 10) > maximum)
            maximum = number % 10;
            number = number / 10;}
    return maximum;}
else if (number < 0) {
        number = number * (-1);
while (number > 0) {
        if ((number % 10) > maximum)
            maximum = number % 10;
            number = number / 10;}
    return maximum;
} else if ((number < 10) && (number >= 0)) {
    return number;}
return 0;}

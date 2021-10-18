#include "middle.h"

int itc_min_num(long long number) {
    int minimum = 9;
if (number > 0) {
        while (number > 0) {
        if ((number % 10) < minimum)
            minimum = number % 10;
    number = number / 10;}
    return minimum;}
else if (number < 0) {
        number = number * (-1);
while (number > 0) {
        if ((number % 10) < minimum)
            minimum = number % 10;
    number = number / 10;}
    return minimum;
} else if ((number < 10) && (number >= 0)) {
    return number;}
return 0;}

int itc_rev_num(long long number) {
  int amount, length;
  amount = 0;
  length = 0;
    if (number == 0){
        return 1;}
   // if ((number >= 0) && (number < 10)) {
       // return 1;}
    if (number < 0) {
            number = number * (-1);}
    while (number > 0) {
    amount = amount * 10 + (number % 10);
    length = length + 1;
    number = number / 10;}
  return itc_len_num(amount);}

bool itc_mirror_num(long long number){
    if (number < 0){
        number = number * (-1);}
    if ( number == 0){
        return 1;}
    long long number_reversed;
    number_reversed = number;
    long long reversed = 0;
    while (number > 0){
        reversed = reversed * 10 + number % 10;
        number = number / 10;}
    if ( reversed == number_reversed)
        return true;
    else
        return false;}

int itc_mirror_count(long long number) {
  if (number < 0) {
    number = number * (-1);}
  int r = 0;
  for (int i = 1 ; i <= number ; i++) {
    if (itc_mirror_num(i))
        r = r + 1;}
  return r;}

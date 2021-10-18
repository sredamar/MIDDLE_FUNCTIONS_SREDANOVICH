#include "middle.h"

int itc_second_max_num(long long number) {
    if (number < 0) {
        number = number * (-1);}
    if (number > 9) {
    int first, second;
    first = -1;
    second = -1;
    while (number > 0) {
        if ((number % 10) > first) {
            second = first;
            first = number % 10; }
        else {
            if ((number % 10) > second) {
                second = number % 10; } }
        number = number / 10;}
    return second;}
    else
        return -1;}

int itc_second_simple_max_num(long long number) {
    if (number < 10)
        return -1;
    if (number > 9) {
    int first, second;
    first = -1;
    second = -1;
    while (number > 0){
        if ((number % 10) >  first){
             second =  first;
             first = number % 10;}
        else {
            if ((number % 10) > second)
                second = number % 10; }
        number = number / 10; }
    if (first == second)
        return -1;
    else
        return second;}
    return 0;}

long long itc_bin_num(long long number) {
    if (number < 0){
        return (itc_bin_num(number * -1))* -1;}
    long long r = 1;
    while (number > 0) {
        r = r * 10 + (number % 2);
        number = number / 2;}
    return itc_rev_num_support(r) / 10;}

long long itc_oct_num(long long number){
    if (number < 0){
        return (itc_oct_num(number * -1))* -1;}
    long long r = 1;
    while (number > 0) {
        r = r * 10 + (number % 8);
        number = number / 8;}
    return itc_rev_num_support(r) / 10;}

int itc_rev_bin_num(long long number){
    long long bin;
    bin = 0;
    int digits;
    digits = itc_len_num(number);
    for (int i = 0; i < digits; i++){
        bin = bin + (number % 10)* mypow(2, i);
        number = number / 10;}
    return bin;}

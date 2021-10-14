#include "middle.h"

int itc_second_max_num(long long number) {
    if (number > 9) {
    int a = - 1;
    int b = - 1;
    while (number > 0) {
        if ((number % 10) > a) {
            b = a;
            a = number % 10; }
        else {
            if ((number % 10) > b) {
                b = number % 10; } }
        number = number / 10;}
    return b;}
    else {
        return -1;}}

int itc_second_simple_max_num(long long number) {
    if (number > 9) {
    int a = -1;
    int b = -1;
    while (number > 0){
        if ((number % 10) > a){
            b = a;
            a = number % 10;}
        else {
            if ((number % 10) > b) {
                b = number % 10; }}
        number = number / 10; }
    if (a==b) {
        return -1;}
    else {
        return b;}}}

long long itc_bin_num(long long number) {
    long long r = 1;
    while (number > 0) {
        r = r * 10 + (number % 2);
        number = number / 2;}
    return itc_rev_num_support(r) / 10;}

long long itc_oct_num(long long number){
    long long r = 1;
    while (number > 0) {
        r = r * 10 + (number % 8);
        number = number / 8;}
    return itc_rev_num_support(r) / 10;}

int itc_rev_bin_num(long long number) {
    int r = 0;
    int k = 0;
    while (number > 0) {
        r = r + (number % 10) * mypow(2, k);
        number = number / 10;
        k += 1;}
    return r;}

// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include "alg.h"


bool checkPrime(uint64_t value) {
if (value < 2) return false;
if (value == 2) return true;
for (uint64_t i = 2; i <= sqrt(value); i++) {
if (!(value % i)) {
return false;
}
}
return true;
}

uint64_t nPrime(uint64_t n) {
uint64_t  temp_num = 0;
for (uint64_t i = 2; i < UINT64_MAX; i++) {
if (checkPrime(i)) {
temp_num++;
}
if (n == temp_num) {
return i;
}
}
return 0;
}

uint64_t nextPrime(uint64_t value) {
for (uint64_t i = value+1; i < UINT64_MAX; i++) {
if (checkPrime(i)) {
return i;
}
}
return 0;
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
for (int i = 2; i < hbound; i++) {
if (checkPrime(i)) {
sum = sum + i;
}
}
return sum;
}

/*
 * Поиск НОК по ускоренному алгоритму Эвклида
 */

#include <stdio.h>

#define T long

T gcd(T a, T b){
    T c;

    while(b){
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}
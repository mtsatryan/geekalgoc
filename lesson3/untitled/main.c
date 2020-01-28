#include <stdio.h>

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void cocktailsort(int *a, size_t n){
    while(1){
        char flag;
        size_t start[2] = {1, n - 1},
        end[2] = {n, 0},
        inc[2] = {1, -1};
        for(int it = 0; it < 2; ++it){
            flag = 1;
            for(int i = start[it]; i != end[it]; i += inc[it])
                if(a[i - 1] > a[i]){
                    swap(a + i - 1, a + i);
                    flag = 0;
                }
            if (flag)
                return;
        }

    }
}

int main() {
    int a[] = {5, -1, 101, 4, 69, 47, 21, 42, 6, 8, 3, 2, 0, 9, 7};
    size_t n = sizeof(a) / sizeof(a[0]);

    cocktailsort(a, n);

    for(size_t i = 0; i < n; ++i)
        printf("%d\n", a[i]);

    return 0;
}
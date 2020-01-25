#include <stdio.h>

int InterpolationSearch(int *a, int length, int value){
    int min = 0;
    int max = length - 1;

    while(min <= max){
        int mid = min + (max - min) * (value - a[min]) / (a[max] - a[min]);

        if (a[mid] == value)
            return mid;
        else if (a[mid] < value)
            min = mid + 1;
        else if (a[mid] > value)
            max = mid - 1;
    }
    return -1;
}

int main() {

    return 0;
}
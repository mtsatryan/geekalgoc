/*
 * Given "m" "o" "r" "e" letters, write all varies of words that could be.
 *
 */

#include <stdio.h>
#include <string.h>

void findWords(char* A, char *word, int N);

int count = 0;

void more(){
    char word[] = "....";
    findWords("more", word, count);

}

void findWords(char* A, char *word, int N){
    if (N == strlen(word)){
        printf("%d %s\n",+count,word);
        return;
    }
    int i;
    char *w;
    w = word;

    for(i = 0; i < strlen(A); i++) {
        w[N] = A[i];
        findWords(A, w, N + 1); // Recursion
    }
}



int main(int argc, char **argv) {

    more();
    return 0;
}
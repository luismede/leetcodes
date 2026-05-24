#include <string.h>
#include <ctype.h>
#include <stdio.h>

int factorial(int n);
int countPermutations(char* str);

int countPermutations(char* str)
{
    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; ++i) {
        count[(unsigned char)tolower(str[i])]++;
    }

    int repetitions = 1;
    for (int i = 0; i < 256; ++i) {
        if (count[i] > 1) {
            repetitions *= factorial(count[i]);
        }
    }

    return factorial(strlen(str)) / repetitions;
}

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

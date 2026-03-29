// https://leetcode.com/problems/fizz-buzz/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char **arr = (char **)malloc(n * sizeof(char *));

    for (int i = 1; i <= n; i++) {
        arr[i-1] = malloc(9);

        if (i % 15 == 0) {
            strcpy(arr[i-1], "FizzBuzz");
        } else if (i % 5 == 0) {
            strcpy(arr[i-1], "Buzz");
        } else if (i % 3 == 0) {
            strcpy(arr[i-1], "Fizz");
        } else {
            sprintf(arr[i-1], "%d", i);
        }
    }


    return arr;
}

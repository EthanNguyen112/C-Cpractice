//https://leetcode.com/problems/longest-common-prefix/description/
#include <stdio.h>
#include <string.h>


char* longestCommonPrefix(char** strs, int strsSize){
    if(strsSize == 0) return "";
    static char prefix [201];
    int i = 0;

    while (1){
        char c = strs[0][i];
        if (c == '\0') break;

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0'){
                prefix[i] = '\0';
                return prefix;
            }
        }

        prefix[i] = c;
        i++;
    }
    prefix[i] = '\0';
    return prefix;
}

int main() {
    char* strs1[] = {"flower", "flow", "flight"};
    char* strs2[] = {"dog", "racecar", "car"};

    printf("Example 1: %s\n", longestCommonPrefix(strs1, 3)); // Output: "fl"
    printf("Example 2: %s\n", longestCommonPrefix(strs2, 3)); // Output: ""

    return 0;
}

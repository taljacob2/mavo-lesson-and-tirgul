#include <stdio.h>

#define FALSE 0
#define TRUE  1
typedef int BOOLEAN;


BOOLEAN isPalindrome(char *strStartPosition, char *strEndPosition) {
    char *savedStrStartPosition = strStartPosition;
    char *savedStrEndPosition   = strEndPosition;
    while (*strStartPosition == *strEndPosition) {
        strStartPosition++;
        strEndPosition--;
        if (strStartPosition == savedStrEndPosition &&
            strEndPosition == savedStrStartPosition) {
            return TRUE;
        }
    }
    return FALSE;
}

int findPalindromeLengthFromPosition(char *strStartPosition) {
    char *saveStartPosition = strStartPosition;
    char  startChar         = *strStartPosition++;
    while (*strStartPosition) {
        if (*strStartPosition == startChar) {
            if (isPalindrome(saveStartPosition, strStartPosition)) {
                return strStartPosition - saveStartPosition + 1;
            }
        }
        strStartPosition++;
    }

    return 1; // The trivial palindrome with the length of `1` .
}

int longestPalindromeSubstring(char *str) {
    int maxLength = 0;
    while (*str) {
        int longestLengthSinceThisPosition =
                findPalindromeLengthFromPosition(str);
        if (longestLengthSinceThisPosition > maxLength) {
            maxLength = longestLengthSinceThisPosition;
        }
        str++;
    }

    return maxLength;
}

int main() {

    // Should return `5`.
    printf("%d\n", longestPalindromeSubstring("toyota"));

    // Should return `14`.
    printf("%d\n", longestPalindromeSubstring("pleaseneveroddorevenplease"));

    return 0;
}
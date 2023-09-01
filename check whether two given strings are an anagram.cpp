#include <stdio.h>
#include <string.h>
int areAnagrams(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
        return 0;
    int charCount[256] = {0};
    for (int i = 0; i < len1; i++) {
        charCount[(int)str1[i]]++;
    }
    for (int i = 0; i < len2; i++) {
        charCount[(int)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (charCount[i] != 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    const char *str1 = "listen";
    const char *str2 = "silent";
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}
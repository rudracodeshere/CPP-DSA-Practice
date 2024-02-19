#include <cstring>

bool isPermutation(char input1[], char input2[]) {
    int count[256] = {0};
    int i;
    if (strlen(input1) != strlen(input2))
        return false;

    for(i = 0; input1[i] && input2[i]; i++) {
        count[input1[i]]++;
        count[input2[i]]--;
    }

    for(i = 0; i < 256; i++)
        if (count[i])
            return false;
    return true;
}

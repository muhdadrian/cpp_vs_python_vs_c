#include <stdio.h>

int main() {
    for (int i = 0; i < 10000000; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// 21 seconds zsh zed terminal
// 22 - 23 seconds  mac terminal

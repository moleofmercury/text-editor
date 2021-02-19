#include <stdio.h>

int main() {
    int c, ws;

    c = ws = 0;
    while (c = getchar()) {
        if (c == '\b')
            --ws;
        if (c == ' ')
            ++ws;
        if (c == '\t')
            ws += 4;
        if (c == '\n')
            for (int i = 0; i < ws; ++i)
                printf(" ");
    }
}

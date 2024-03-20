#include <stdio.h>
#define IN 1
#define Out 0

int main(void)
{
    int c, nl, nw, nc, state;

    state = Out;
    nl = nw = nc = 0;
    while ((c = getchar()) != '\n') {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = Out;
        else if (state == Out) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n'", nl, nw, nc);
    return 0;
}
#include <stdio.h>
#include <assert.h>

#define MAXN 1000000

int posiziona(int N, int L, int H[]) {
    return 42;
}


int H[MAXN];

int main() {
    FILE *fr, *fw;
    int N, L, i;

#ifdef EVAL
    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
#else
    fr = stdin;
    fw = stdout;
#endif
    assert(2 == fscanf(fr, "%d %d", &N, &L));
    for(i=0; i<N; i++)
        assert(1 == fscanf(fr, "%d", &H[i]));

    fprintf(fw, "%d\n", posiziona(N, L, H));
    fclose(fr);
    fclose(fw);
    return 0;
}

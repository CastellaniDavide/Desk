#include <stdio.h>
#include <assert.h>
#include <vector>

using namespace std;

#define MAXN 1000000

int posiziona(int N, int L, int H[])
{
    vector < vector <int> > frequenza(2);
    bool controllo=true;
    int posizione;
    for(int i : H)
    {
        for(int j=0; j < frequenza.size(); j++)
        {
            if(controllo)
            {
                if(frequenza[0][j]==i)
                {
                    controllo=false;
                    posizione=j;
                }
            }
        }
        if(controllo)
        {
            frequenza[0].push_back(i);
            frequenza[1].push_back(1);
        }
        else
        {
            frequenza[1][posizione]++;
        }
    }
    int max_1=0;
    int max_2=0;
    for(int i : frequenza[1])
    {
        if(i>max_1)
        {
            max_1=i;
        }
        else
        {
            if(i>max_2)
            {
                max_2=i;
            }
        }
    }
    return N-max_1-max_2;
}


int H[MAXN];

int main()
{
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

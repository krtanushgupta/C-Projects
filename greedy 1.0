#include <stdio.h>
int qu(int *, int, int);
int qu(int *set, int t, int n)
{
    int max;
    int freq;
    max = set[n - 1];
    freq = t / max;
    if (t % max == 0)
    {
        freq = t / max;
        return freq;
    }
    else
    {
        t = t - (freq * max);
        int r = qu(set, t, n - 1);
        if (r != -1)
        {
            return freq + r;
        }
    }
    return -1;
}
int main()
{
    int den[] = {1, 2, 5, 10};
    int target;
    scanf("%d", &target);
    int p = qu(den, target, 4);
    printf("%d\n", p);
    return 0;
}

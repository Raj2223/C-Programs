#include <stdio.h>
using namespace std;

int main()
{
    int movie = 1, ans;

    switch (movie << (2 + movie))
    {
    case 8:
        printf("Raj\n");
    default:
        printf("Hello\n");
    }

    ans = (movie << (2 + movie));
    printf("%d\n", ans);

    return 0;
}
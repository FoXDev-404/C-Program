#include <stdio.h>

// This is an example of "Multidimensiomal arrays".

int main()
{
    // 2 x 3
    int maarks[2][3]; //_ _ _ | _ _ _
    maarks[0][0] = 90;
    maarks[0][1] = 89;
    maarks[0][2] = 78;

    maarks[1][0] = 92;
    maarks[1][1] = 87;
    maarks[1][2] = 79;

    printf("%d", maarks[0][0]);
    return 0;
}

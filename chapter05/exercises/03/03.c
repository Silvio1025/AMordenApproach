#include <stdio.h>

int main(void)
{
    int i, j, k;

//    i = 3;
//    j = 4;
//    k = 5;
//
//    printf("%d\n", i < j || ++j < k);
//    printf("%d %d %d", i, j, k);

//    i = 7;
//    j = 8;
//    k = 9;
//
//    printf("%d\n", i - 7 && j++ < k);//优先级：算术 > 关系 > 逻辑
//    printf("%d %d %d", i, j, k);

//    i = 7;
//    j = 8;
//    k = 9;
//
//    printf("%d\n", (i = j) || (j = k));//左结合
//    printf("%d %d %d", i, j, k);

    i = 1;
    j = 1;
    k = 1;

    printf("%d\n", ++i || ++j && ++k);
    printf("%d %d %d", i, j, k);

    return 0;
}
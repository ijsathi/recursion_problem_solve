#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int t = 0; t < test_case; t++)
    {
        int hight, width;
        scanf("%d %d", &hight, &width);
        if (hight == width)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}
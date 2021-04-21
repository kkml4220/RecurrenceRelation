#include <stdio.h>
#include <math.h>

#define ATTEMPT_MAX 100
#define EPS 1.0e-6

int main(void)
{
    double aa, error;
    double a = 3.0; // 初期値
    printf("実行結果\n");
    for (int n = 1; n <= ATTEMPT_MAX; n++)
    {
        aa = 2 * sqrt(a); // 漸化式
        printf("n: %3d, x: %lf\n", n, aa);
        error = fabs(aa - a) / fabs(a); // 相対誤差
        if (error < EPS) // 相対誤差判定
        {
            printf("収束しました\n");
            break;
        }
        a = aa;
    }
    return 0;
}

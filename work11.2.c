#include <stdio.h>

float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int math, physics, chemistry;
    printf("Math: ");      scanf("%d", &math);
    printf("Physics: ");   scanf("%d", &physics);
    printf("Chemistry: "); scanf("%d", &chemistry);

    float avg = average(math, physics, chemistry);
    printf("Math=%d Physics=%d Chemistry=%d\n", math, physics, chemistry);
    printf("Average = %.2f\n", avg);
    return 0;
}
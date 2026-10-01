#include <stdio.h>

void inputAndShow() {
    int math, physics, chemistry;
    printf("Math: ");      scanf("%d", &math);
    printf("Physics: ");   scanf("%d", &physics);
    printf("Chemistry: "); scanf("%d", &chemistry);
    printf("Math=%d Physics=%d Chemistry=%d\n", math, physics, chemistry);
}

int main() {
    inputAndShow();
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    float m[10];
    scanf("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f", &m[0], &m[1], &m[2],&m[3], &m[4], &m[5], &m[6], &m[7], &m[8], &m[9]);

    printf("%f\n", (m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8]+m[9])/10);
    return 0;
}
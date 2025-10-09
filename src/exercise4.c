#include <stdio.h>

int main(int argc, char** argv) {
    float m[10]={2.5, 3.6, 2.1, 9.6, 4, 8.7, 2, 3, 1, 4.5};
    float g[10]={2.5, 3.6, 2.1, 9.6, 4, 8.7, 2, 3, 1, 4.5};
    float x;
    int k;
    scanf("%f", &x);
    scanf("%d", &k);
    for (int i = 0; i<10; ++i){
        if (i<k){
            m[i]=g[i];
        }
        else if (i==k){
            m[i]=x;
        }
        else if (i>k){
            m[i]=g[i-1];
        }
    }
    for (int i = 0; i<10; ++i){
        printf(" %f", m[i]);
    }
    return 0;
}
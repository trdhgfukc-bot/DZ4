#include <stdio.h>
int main(int argc, char** argv) {
    float m[10]={2.5, 3.6, 2.1, 9.6, 4, 8.7, 2, 3, 1, 4.5};
    float g[10]={2.5, 3.6, 2.1, 9.6, 4, 8.7, 2, 3, 1, 4.5};
    int k;
    scanf("%d", &k);
    for (int i = 0; i<11; ++i){
        if (k>0){
            if (i==0){
                m[i]=g[9];
            }
            else if (i<10){
            m[i]=g[i-1];
            }
        }
        else{
            if (i!=9){
            m[i]=g[i+1];
            }
            else{
                m[i]=g[0];
            }
        }
    }
    int size =sizeof(g)/sizeof(g[0]);
    for (int i = 0; i<10; ++i){
        printf(" %f", m[i]);
    }
    return 0;
}
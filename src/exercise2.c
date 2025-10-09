#include <stdio.h>

int main(int argc, char** argv) {
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int size =sizeof(a)/sizeof(a[0]);
    for (int i = size-1; i>-1; --i){
        printf(" %d", a[i]);
    }
    return 0;
}
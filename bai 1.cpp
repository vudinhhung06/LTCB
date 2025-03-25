#include <stdio.h>

int main() {
    int a[10], i; 
    for(i = 0; i < 10; i++) {
        printf("Hay nhap gia tri cho phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\nCac gia tri vua nhap la:");
    for(i = 0; i < 10; i++) {
        printf("%d ",  a[i]);
    }

    return 0;
}

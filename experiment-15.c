#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5}, key;
    scanf("%d",&key);

    for(int i=0;i<5;i++) {
        if(a[i]==key) {
            printf("Found");
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}

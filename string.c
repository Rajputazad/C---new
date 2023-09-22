#include <stdio.h>
#include <string.h>

void fun(); // Function prototype

int main(){
    fun();
    return 0;
}

void fun(){
    char a[30], b[30];
    fgets(a, sizeof(a), stdin);
    scanf("\n%s", b);
    int *ptr = (int *)b;
    printf("%s%p\n%p", a, &b, ptr);
}

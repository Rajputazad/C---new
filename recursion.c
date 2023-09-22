#include <stdio.h>

int fun(int a);
int main(){
    printf("%d",fun(10));
}

int fun(int a){
    if(a>0){
// printf("%d\n",a);
return a=a+fun(a-1);
    }else{
        return 0;
    }
}
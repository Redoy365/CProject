#include<stdio.h>
int main(){
    int x = 5;

    int y = x++;
    int z = ++x;

    printf("%d\n",y);
    printf("%d\n",z);

}
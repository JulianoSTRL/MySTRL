#include <stdio.h>

int main(){
    int i = 1;

    do{
        printf("%d\n", i);
        i++;
    }
    while (i != 5);

    for (int j = 1; j <= 15; j++){
        printf("%d\n", j);
    }
    return 0;
}
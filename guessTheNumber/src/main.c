#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int randomInt = rand() % 10;
    int userInt;

    printf("Угадай число!\n");
    while (1) {
        printf("Введите число: ");
        scanf("%d",&userInt);
        if (userInt == randomInt) break;
        else {
            if (userInt > randomInt) {
                printf("Меньше!\n");
            } else printf("Больше!\n");
        }
    }
    printf("Вы угадали число!\n");

    return 0;
}

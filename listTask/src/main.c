#include <stdio.h>

typedef struct Task {
    char title[50];
    char about[150];
    char limit[100];
}task;

void seeList(int* currentTask, task* listTasks);

int main() {
    int chooseMenu;
    task listTasks[50];
    int currentTask = 0;
    while (1) {
        printf("\nlistTask 1.0\nby etherkabel\n");
        printf("Выберите действие:\n1. Создать задачу\n2. Просмотреть задачи\n3. Удалить задачу\n\nВаш выбор: ");
        scanf("%d",&chooseMenu);

        if (chooseMenu == 1) {
            printf("Введите имя задачи: ");
            fgets(listTasks[currentTask].title,sizeof(listTasks[currentTask].title),stdin);
            printf("Добавьте описание: ");
            fgets(listTasks[currentTask].about,sizeof(listTasks[currentTask].about),stdin);
            printf("Назначьте срок: ");
            fgets(listTasks[currentTask].limit,sizeof(listTasks[currentTask].limit),stdin);
            currentTask++;
            printf("Успешно! Можете просмотреть свой список)\n");
        }

        if (chooseMenu == 2) seeList(&currentTask, listTasks);

        if (chooseMenu == 0) break;
    }

    return 0;
}

void seeList(int* currentTask, task* listTasks) {
    for (int i=0;i<*currentTask;++i) {
        printf("\n====%[^\n]====\n",listTasks[i].title);
    }
}

// kernel.c

#include <stdio.h>

void main() {
    char command_buffer[64];
    char exit_command[] = "exit";

    printf("Привіт, Світ!\n");

    // Основний цикл введення команд
    while (1) {
        printf("Введіть команду: ");
        fgets(command_buffer, sizeof(command_buffer), stdin);

        // Порівняння введеної команди з "exit"
        if (strcmp(command_buffer, exit_command) == 0) {
            // Якщо введено "exit", вихід з програми
            break;
        }

        // Додайте код для обробки інших команд тут
    }
}

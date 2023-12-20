#include <stdio.h>

int main() {
    
    FILE *file = fopen("Lab_9_result.md", "w"); // Відкриваємо (створюємо) файл "Lab_9_result.md" для запису

    
    if (file != NULL) {
        
        fprintf(file, "# Список гіперпосилань:\n\n"); // Записуємо заголовок у файл

        
        fprintf(file, "- [Вибіркові дисципліни](http://its.kpi.ua/uk/node/234)\n");
        fprintf(file, "- [Перелік освітніх компонент](http://its.kpi.ua/uk/node/266)\n");
        fprintf(file, "- [Зразки основних документів](http://its.kpi.ua/uk/node/146)\n"); // Записуємо гіперпосилання у файл

        
        fclose(file); // Закриваємо файл

        
        printf("The file was successfully created.\n"); // Виводимо повідомлення про успішне створення файлу
    } else {
        
        printf("Error.\n"); // Виводимо повідомлення про невдале створення файлу
    } // Перевіряємо, чи вдалося відкрити файл

    return 0;
}

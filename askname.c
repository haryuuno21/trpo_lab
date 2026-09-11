#include <stdio.h>
#include <string.h>

// Функция запроса имени и фамилии пользователя
void askname(char *first, char *last)
{
 printf("Enter your first name: ");
 fgets(first, 255, stdin);
 first[strlen(first)-1] = '\0'; /* Удаляем перенос строки в конце*/
 printf("Now enter your last name: ");
 gets(last);
}

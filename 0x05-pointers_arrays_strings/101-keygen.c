#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main(void)
{
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_length = sizeof(charset) - 1;

    srand(time(NULL));

    printf("Generated passwords:\n");

    for (int i = 0; i < 10; i++)
    {
        char password[PASSWORD_LENGTH + 1];
        
        for (int j = 0; j < PASSWORD_LENGTH; j++)
        {
            int index = rand() % charset_length;
            password[j] = charset[index];
        }

        password[PASSWORD_LENGTH] = '\0';
        printf("%s\n", password);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Create a program that generates random valid passwords for the program 101-crackme.
 * return: Always 0
 */
char getRandomChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?/";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}
void generatePassword(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = getRandomChar();
    }
    password[length] = '\0';
}
int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    int passwordLength = 12; // Change this to the desired password length
    char password[passwordLength + 1];

    generatePassword(password, passwordLength);
    printf("Generated Password: %s\n", password);

    return 0;
}

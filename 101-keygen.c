#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * valid - character set used to generate the password
 */
static const char valid[] =
    "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "0123456789"
    "!@#$%^&*()-_=+[]{};:,.<>?/";

/**
 * VALID_LEN - length of the valid character set
 */
#define VALID_LEN (sizeof(valid) - 1)

/**
 * PASS_LEN - length of the password to generate
 */
#define PASS_LEN 16

/**
 * rand_char_from_valid - picks a random character from the valid set
 *
 * Return: a random character
 */
char rand_char_from_valid(void)
{
    return (valid[rand() % VALID_LEN]);
}

/**
 * gen_password - generates a random password
 * @buf: buffer to store the password
 * @len: length of the password (excluding null terminator)
 *
 * Return: nothing
 */
void gen_password(char *buf, size_t len)
{
    size_t i;

    for (i = 0; i < len; i++)
        buf[i] = rand_char_from_valid();
    buf[len] = '\0';
}

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
    char pass[PASS_LEN + 1];
    time_t seed = time(NULL);

    srand((unsigned int) seed);
    printf("seed = %ld\n", (long) seed);

    gen_password(pass, PASS_LEN);
    printf("password: %s\n", pass);

    return (0);
}

#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(char *s);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);

#endif

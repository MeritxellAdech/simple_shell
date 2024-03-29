#ifndef __simpleshell__H__
#define __simpleshell__H__

/*Headers*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/*Macros*/
#define I_MODE 1
#define NON_I_MODE 0
#define ERR_OCCURED -1

#define VALID_CMD 0
#define INVALID_CMD 89
#define IS_EXEC 1
#define IS_NOT_EXEC 90

/*Structs*/

/*Function prototypes*/
int _accept(char **buffer, size_t *bytes_read);
int check_file(char *path);
int _putchar(char c);
int _exec(char *commands);
int check_mode(void);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char **_strtok(char *str, char *delim);
int tok_count(char *str, char *delim);

#endif

#ifndef MAIN_H
#define MAIN_H

void reset_to_98(int *n);

void swap_int(int *a, int *b);

void _puts(char *str);

int _strlen(char *s);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

char *_strcat(char *dest, char *src);

int _strcmp(char *dest, char *src);

char *_strncpy(char *dest, char *src, int n);

char *_strncat(char *dest, char *src, int n);

void reverse_array(int arr[], int size);

char *string_toupper(char *);

char *cap_string(char *);

char *leet(char *);

char *rot13(char *);

void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

int _atoi(char *s);

void print_buffer(char *b, int size);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

int _putchar(char c);

#endif /* MAIN_H */

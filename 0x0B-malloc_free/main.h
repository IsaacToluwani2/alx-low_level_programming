#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);
int word_len(char *str);
char **strtow(char *str);
int count_words(char *str);

#endif /* MAIN_H */

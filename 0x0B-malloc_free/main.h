char *create_array(unsigned int size, char c);

char *_strdup(char *str);

int _strlen(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);

int majorwords(char *str);

int count(char *str, int i);

int num_words(char *str);

int len(char *str);

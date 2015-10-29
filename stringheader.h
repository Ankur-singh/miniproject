char *mstrlwr(char *s);
char *mstrupr(char *s);
char *mstrrev(char *s);
char *mstrcpy(char *s, char *t);
char *mstrncpy(char *s, char *t, int n);
char *mstrcat(char *s, char *t);
char *mstrncat(char *s, char *t, int n);
int mstrcmp(char *s, char *t);
int mstrncmp(char *s, char *t, int n);
char *mstrchr(char *s, char a);
char *mstrrchr(char *s, char a);
char *mstrpbrk(char *s, char *t);
char *mstrrbrk(char *s, char *t);
int mstrlen(char *s);
int mstrspn(char *s, char *t);
void *mnset(char *s, char c, int n);
char *mstrtok(char *s, char *delimiters);



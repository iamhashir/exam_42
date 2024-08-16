#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char **ft_split(char *str) {
    int word_count = 0;
    char *p = str;
    while (*p) {
        while (*p && (*p == ' ' || *p == '\t' || *p == '\n'))
            p++;
        if (*p) {
            word_count++;
            while (*p && *p != ' ' && *p != '\t' && *p != '\n')
                p++;
        }
    }

    char **words = malloc((word_count + 1) * sizeof(char *));
    if (!words)
        return NULL;

    p = str;
    int i = 0;
    while (*p) {
        while (*p && (*p == ' ' || *p == '\t' || *p == '\n'))
            p++;
        if (*p) {
            int word_len = 0;
            char *q = p;
            while (*q && *q != ' ' && *q != '\t' && *q != '\n') {
                word_len++;
                q++;
            }
            char *word = malloc((word_len + 1) * sizeof(char));
            if (!word)
                return NULL;
            ft_strncpy(word, p, word_len);
            word[word_len] = '\0';
            words[i++] = word;
            p = q;
        }
    }
    words[i] = NULL;
    return words;
}
int main(){
	printf("%s",ft_split("hashir is hashing")[1]);
}
#include "libft.h"

char* ft_strtrim(char const *s1, char const *set)
{
    char* sub;
    size_t start;
    size_t end;

    start = 0;
    end = ft_strlen(s1) - 1;
    while (ft_strchr(set, s1[start]) && s1[start])
        start++;
    if (s1[start])
        while (ft_strchr(set, s1[end]) && end > 0)
            end--;
    sub = ft_substr(s1, start, end - start + 1);
    if (sub == NULL)
        return (NULL);
    return (sub);
}
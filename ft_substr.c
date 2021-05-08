#include "libft.h"

char* ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t size;
    size_t len_s;
    char* sub;

    len_s = ft_strlen(s);
    if (len_s > start)
    {
        if (len_s - start < len)
        {
            size = len_s - start;
        }
        else
        {
            size = len;
        }
    }

    char *sub = malloc((size + 1) * sizeof(char));
    if (sub == NULL)
    {
        return (NULL);
    }
    ft_strlcpy(sub, s + start, size + 1);
    return (sub);
}
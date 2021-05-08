#include "libft.h"

char* ft_strdup(const char* s1)
{
    size_t size;
    char* ptr;

    size = ft_strlen(s1) + 1;
    char *ptr = (char*)malloc((size) * sizeof(char));
    if (ptr == NULL)
    {
        return (NULL);
    }
    ft_strlcpy(ptr, s1, size);
    return (ptr);
}
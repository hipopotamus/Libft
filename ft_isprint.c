#include "libft.h"

int isprint(int c)
{
    if (32 <= c && c <= 126)
    {
        return (1);
    }
    return (0);
}
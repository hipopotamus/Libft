#include "libft.h"

int ft_atoi(const char* str)
{
    int signal;
    int i;
    int res;

    signal = 1;
    i = 0;
    res = 0;
    while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            signal *= -1;
        }
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        res *= 10;
        res += str[i] - '0';
        i++;
    }
    return (res * signal);
}
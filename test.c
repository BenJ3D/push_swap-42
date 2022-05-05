#include <unistd.h>

int ft_putchar(char c)
{
    return (write(1, &c, 1));
}

int main(int ac, char **av)
{
    int ctn;

    ctn = 10;
    ft_putchar('b');
    return (0);
}
int     dp_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    return (nb * dp_recursive_factorial(nb - 1));
}

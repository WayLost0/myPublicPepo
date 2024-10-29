void ft_ultimate_div_mod(int *a, int *b)
{
    int swp = *a;
    *a = *a / *b;
    *b = swp % *b;
}
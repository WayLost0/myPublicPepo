void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int swp;

    while(size  > 0)
    {
        i = 0;
            while(i < size - 1)
            {
                if (tab[i] > tab[i + 1])
                {
                swp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = swp;
                i++;
                }
            i++;
            }
        size--;
    }
}

#include <stdio.h>
int main()
{
    int a[] = {5,1,78,25,72,2,1,134} ;
    ft_sort_int_tab(a,8);
    int i = 0;
    while(a[i] != 0)
    {
        printf("%d -- ",a[i]);
        i++;
    }
}
#include <unistd.h>

void ft_print_comb()
{
    char number1;
    char number2;
    char number3;

    number1 = '0';
    while(number1 <= '7')
    {    
        number2 = number1 + 1;
        while(number2 <= '8')
        {
            number3 = number2 + 1;
            while(number3 <= '9')
            {
                write(1, &number1, 1);
                write(1, &number2, 1);
                write(1, &number3, 1);
                if(number1 < '7')
                    write(1, " ", 1);
                number3++;
            }
            number2++;
        }
        number1++;
    }
}
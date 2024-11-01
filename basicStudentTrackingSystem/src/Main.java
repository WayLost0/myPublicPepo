import java.util.Formattable;
import java.util.Random;
import java.util.Scanner;

public class Main
{
    static int[] numbers = new int[0];
    static Scanner sc = new Scanner(System.in);

    static int choose()
    {
        System.out.println("1 - Enter a argument");
        System.out.println("2 - Write the argument");
        System.out.println("3 - Out of program");
        System.out.print("\nChoose a number : ");
        return (sc.nextInt());
    }

    static void addArgument(int[] a_numbers)
    {
        int[] a_numbers2 = new int[a_numbers.length + 1];

        for (int i = 0; i < a_numbers.length; i++)
        {
            a_numbers2[i] = a_numbers[i];
        }

        System.out.print("\nAdd a number : ");
        a_numbers2[a_numbers.length] = sc.nextInt();;
        System.out.println();

        numbers = a_numbers2;
    }

    static void printArgument(int[] p_numbers)
    {
        System.out.print("\nthe numbers are : ");
        for(int num : p_numbers)
        {
            System.out.print(num + "\t");
        }
        System.out.println();
    }

    public static void main (String[] args)
    {
        int choose = 1;

        boolean status = true;
        while(status)
        {
            choose = choose();
            switch(choose)
            {
                case 1:
                    addArgument(numbers);
                    break;
                case 2:
                    printArgument(numbers);
                    break;
                case 3:
                    status = false;
                    break;
                default:
                    break;

            }
        }
    }
}
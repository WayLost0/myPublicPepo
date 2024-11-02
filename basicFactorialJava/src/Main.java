import java.util.Random;
import java.util.Scanner;

public class Main
{
    static int iFactorial(int nb)
    {
        return (nb > 1) ? nb * iFactorial(nb  - 1): 1;
    }

    static String sFactorial(int nb)
    {
        return (nb > 1) ? nb + " * " + sFactorial(nb - 1): "1";
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number : ");
        int nbr = sc.nextInt();
        System.out.println(nbr + "! = " + iFactorial(nbr) + "   The way = " + sFactorial(nbr));
    }
}
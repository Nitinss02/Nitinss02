import java.util.*;

public class Program381 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iRow, icol;
        System.out.println("Enter Number of row");
        iRow = sobj.nextInt();
        System.out.println("Enter Number of Colomn");
        icol = sobj.nextInt();

        int Arr[][] = new int[iRow][icol];

        int i, j;

        System.out.println("Enter the elements");
        for (i = 0; i < iRow; i++) {
            for (j = 0; j < icol; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
        System.out.println("Entered elements are : ");
        for (i = 0; i < iRow; i++) {
            for (j = 0; j < icol; j++) {
                System.out.print(Arr[i][j] + "    ");
            }
            System.out.println();
        }
        sobj.close();

    }
}

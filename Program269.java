
import java.util.*;

public class Program269 {
    public static boolean checkBit(int iNo) {
        int iMask1 = 0X00004040;
        int iResult1 = 0;

        iResult1 = iNo & iMask1;

        if (iResult1 == iMask1) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bRet = false;
        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        bRet = checkBit(iNo);
        if (bRet == true) {
            System.out.println("7th & 15th bit is ON");
        } else {
            System.out.println(" bits is OFF");
        }

    }

}

/*
 * Bit Position 17
 * 
 * 0000 0000 0000 0000 0100 0000 0100 0000
 * 0 0 0 0 4 0 4 0
 * 
 * 0X00004040
 */
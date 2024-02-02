/* Q5) write a program which accept one number from user and toggle contents of first and last nibble of the number.Return modified number.
(Nibble is group of four bits)

*/
import java.util.Scanner;

class A39Q5 
{
    public static int ToggleBit(int iNo)
     {
        int iMask = 0xF000000F; 


        int firstNibble = (iNo & 0xF0000000) >>> 28; 
        int lastNibble = iNo & 0x0000000F;

      
        int toggledFirstNibble = firstNibble ^ 0xF; 
        int toggledLastNibble = lastNibble ^ 0xF;

        
        int result = (iNo & ~iMask) | (toggledFirstNibble << 28) | toggledLastNibble;

        return result;
    }

    public static void main(String Arg[]) {
        int iValue = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number:");
        iValue = sobj.nextInt();

        iRet = ToggleBit(iValue);
        System.out.println("Modified number after toggling first and last nibble: " + iRet);
    }
}
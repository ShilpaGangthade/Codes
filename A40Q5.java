/*Q5) Write a program which accept one number from user and range of positions from user,toggle all bits from that range.

Input: 897  9   13
Toggle all bits from position 9 to 13 of input number i.e.879
*/
import java.util.*;
class A40Q5
{
public static int ToggleBit(int number, int start, int end)
    {

   int mask = 1 << (start - 1);
        for (int i = start; i <= end; i++)
         {
            number = number ^ mask;
            mask = mask << 1;
        }

        return number;
    }
public static void main(String Arg[])
{
    int iValue1 = 0;int iValue2=0; 
    int ipos1 =0; int ipos2=0; int iRet=0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter first number:");
    iValue1 = sobj.nextInt();


    System.out.println("Enter start  position:");
    ipos1 = sobj.nextInt();

    System.out.println("Enter end position:");
    ipos2 = sobj.nextInt();

   
    iRet= ToggleBit(iValue1,ipos1,ipos2);
    
        System.out.println("Toggle bits are:"+iRet);
    
   
}
}
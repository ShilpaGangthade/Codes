/* Q1) write a program which accept one number and position from user and check whether bit at that position is on or off. if bit is one return TRUE
otherwise return FALSE.

Input: 10   2
Output: TRUE
*/
import java.util.*;
class A39Q1
{
     public static boolean ChkBit(int iNo, int iPos)
    {
     int iResult=0;
     int iMask =0x00000001;

      iMask = iMask<<(iPos-1);
      iResult=iNo & iMask;
       if(iResult == iMask)
       {
            return true;
       }
       else 
       {
           return false;
       }
      } 
public static void main(String Arg[])
{
    int iValue = 0;
    boolean bRet = false;
    int iPoS = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter a  number:");
    iValue = sobj.nextInt();

    System.out.println("Enter a  position :");
    iPoS = sobj.nextInt();

    bRet = ChkBit(iValue,iPoS);

    if(bRet)
   {
    System.out.println("TRUE");
   }
   else 
   {
    System.out.println("FALSE");
   }
}
}
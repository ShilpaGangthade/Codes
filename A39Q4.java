/* Q4) write a program which accept one number and position from user and toggle that bit. and return modified number.

Input: 10   3
Output: 14
*/
import java.util.*;
class A39Q4
{
     public static int ToggleBit(int iNo, int iPos)
    {
     int iResult=0;
     int iMask =0x00000001;

      iMask = iMask<<(iPos-1);
      iResult=iNo & iMask;
       if(iResult == iMask)
       {
            return (iNo ^ iMask);
       }
       else 
       {
           return (iNo ^ iMask);
       }
      } 
public static void main(String Arg[])
{
    int iValue = 0;
    int iRet = 0;
    int iPoS = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter a  number:");
    iValue = sobj.nextInt();

    System.out.println("Enter a  position :");
    iPoS = sobj.nextInt();

    iRet = ToggleBit(iValue,iPoS);
    System.out.println("Modified number is:"+iRet);

    
}
}
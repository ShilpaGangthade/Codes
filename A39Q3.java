/* Q3) write a program which accept one number and position from user and on that bit. and return modified number.

Input: 10   3
Output: 14
*/
import java.util.*;
class A39Q3
{
     public static int OnBit(int iNo, int iPos)
    {
     int iResult=0;
     int iMask =0x00000001;

      iMask = iMask<<(iPos-1);
      iResult=iNo & iMask;
       if(iResult == iMask)
       {
            return iNo;
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

    iRet = OnBit(iValue,iPoS);
    System.out.println("Modified number is:"+iRet);

    
}
}
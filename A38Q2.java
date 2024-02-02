/* Q2) write a program which accept one number from user and off 7th and 10th  bit of that number. Return modified number

Input: 577
Output: 1
*/
import java.util.*;
class A38Q2
{
     public static int OffBit(int iNo)
    {
     int iResult=0;
     int iMask =0x00000240;

      iResult=iNo & iMask;
       if(iResult == iMask)
       {
            return (iNo ^ iMask);
       }
       else 
       {
           return iNo;
       }
      } 
public static void main(String Arg[])
{
    int iValue = 0;
    int iRet = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter a  number:");
    iValue = sobj.nextInt();

    iRet = OffBit(iValue);

    
    System.out.println("Modified number is:"+iRet);

}
}
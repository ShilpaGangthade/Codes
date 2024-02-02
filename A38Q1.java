/* Q1) write a program which accept one number from user and off 7th bit of that number if it is on .Return modified number

Input: 79
Output: 15
*/
import java.util.*;
class A38Q1
{
     public static int OffBit(int iNo)
    {
     int iResult=0;
     int iMask =0x00000040;

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
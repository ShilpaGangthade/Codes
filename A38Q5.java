/* Q5) write a program which accept one number from user and on its first 4 bits. Return modified number.

Input: 73
Output: 79
*/
import java.util.*;
class A38Q5
{
     public static int OnBit(int iNo)
    {
     int iResult=0;
     int iMask =0x0000000f;

      iResult=iNo & iMask;
       if(iResult == iMask)
       {
            return iNo;
       }
       else 
       {
           return (iNo | iMask);
       }
      } 
public static void main(String Arg[])
{
    int iValue = 0;
    int iRet = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter a  number:");
    iValue = sobj.nextInt();

    iRet = OnBit(iValue);

    
    System.out.println("Modified number is:"+iRet);

}
}
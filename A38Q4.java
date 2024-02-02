/* Q4) write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number

Input: 137
Output: 713
*/
import java.util.*;
class A38Q4
{
     public static int ToggleBit(int iNo)
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
           return (iNo ^ iMask);
       }
      } 
public static void main(String Arg[])
{
    int iValue = 0;
    int iRet = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter a  number:");
    iValue = sobj.nextInt();

    iRet = ToggleBit(iValue);

    
    System.out.println("Modified number is:"+iRet);

}
}
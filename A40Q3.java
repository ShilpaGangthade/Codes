/*Q3) Write a program which accept two number from user and check whether 9th or 12th bit is on or off.

Input: 257
Output:TRUE
*/
import java.util.*;
class A40Q3
{
public static boolean ChkBit(int iNo1)
    {
     int iResult=0;
     int iMask9 =0x00000100;
     int iMask12 =0x00000800;
     if(((iNo1 & iMask9)==iMask9) || ((iNo1 & iMask12)==iMask12))
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
    int iValue1 = 0;
    boolean bRet=false;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter number:");
    iValue1 = sobj.nextInt();
   
     bRet = ChkBit(iValue1);
     if(bRet==true)
     {
        System.out.println("TRUE");
     }
     else 
     {
        System.out.println("FALSE");
     }
   
}
}
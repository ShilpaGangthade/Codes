/*Q4) Write a program which accept one number,two positions from user and check whether bit at first or bit at
second position is ON or OFF.

Input: 10  3  7
Output:TRUE
*/
import java.util.*;
class A40Q4
{
public static boolean ChkBit(int iNo1,int iPoS1,int iPoS2)
    {
     int iResult=0;
     int iMask =0x00000001;
     int iPos=0;
  
  int iMask1=iMask<<(iPoS1-1);
    int iMask2=iMask<<(iPoS2-1);
  
    if(((iNo1 & iMask1)==iMask1) || ((iNo1 & iMask2)==iMask2))
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
    int iValue1 = 0;int iValue2=0; 
    int ipos1 =0; int ipos2=0; boolean bRet=false;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter first number:");
    iValue1 = sobj.nextInt();


    System.out.println("Enter first  position:");
    ipos1 = sobj.nextInt();

    System.out.println("Enter second position:");
    ipos2 = sobj.nextInt();

   
    bRet= ChkBit(iValue1,ipos1,ipos2);
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
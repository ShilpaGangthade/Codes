/*Q2) Write a program which check whether 5th & 18th bit is On or Off.

*/
import java.util.*;
class A37Q2
{

public static boolean ChkBit(int iNo)
{
int iResult  = 0;
int iMask = 0X00020010;

iResult = iNo & iMask;
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

 Scanner sobj = new Scanner(System.in);
 
 System.out.println("Enter the Number");
 iValue = sobj.nextInt();

 bRet = ChkBit(iValue);
 if(bRet==true)
 {
    System.out.println("5th and 18th bits are on");
 }
else 
{
    System.out.println("5th and 18th bits are off");
}

}
}
/*Q5) Write a program which check whether first and last bit is On or Off. First bit means bit number 1 and last bit means bit number 32.

*/
import java.util.*;
class A37Q5
{

public static boolean ChkBit(long iNo)
{
long iResult  = 0;
long iMask = 0X80000001;

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
public static void main(String Arg[]) throws Exception
{
    long iValue = 0;
    boolean bRet = false;

 Scanner sobj = new Scanner(System.in);
 
 System.out.println("Enter the Number");
 iValue = sobj.nextLong();

 bRet = ChkBit(iValue);
 if(bRet==true)
 {
    System.out.println("first and last bits are on");
 }
else 
{
    System.out.println("first and last bits are off");
}

}
}
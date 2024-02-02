/*
Q3)  Write a Java program which accepts 2 strings from user and check whether first N contents of two strings are equal or not.

Note: If third parameter is greater than the size of second string then concat whole string after the first string.

Input: "Marvellous Infosystems"
       "Marvellous Logic Building"
        10
Output: TRUE


Program Layout:
*/
import java.util.*;

 class A36Q3
 {
    public static boolean StrNCmpX(String src, String dest, int iCnt)
    {
          int i = 0;
         char Arr[]=src.toCharArray();
         char Brr[]=dest.toCharArray();
         if(iCnt>Brr.length)
         {
            iCnt=Brr.length;
         }
         for(i=0;i<iCnt;i++)
         {
            if(Arr[i]!=Brr[i])
            {
                  return false;
            }
         }
         return true;
    }
    public static void main(String args[])
    {
      String str1=null,str2=null;
      boolean bRet=false;
      int No = 0;
      Scanner sobj = new Scanner(System.in);
      System.out.println("String one is : ");
      str1=sobj.nextLine();
      System.out.println("String two is : ");
      str2=sobj.nextLine();
      System.out.println("N is : ");
      No=sobj.nextInt();
      bRet=StrNCmpX(str1,str2,No);
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
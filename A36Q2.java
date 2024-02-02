/*
Q2)  Write a Java program which accepts 2 strings from user and check whether contents of two strings are equal or not.


Input: "Marvellous Infosystems"
       "Marvellous Infosystems"
        
Output: TRUE


Program Layout:
*/
import java.util.*;

 class A36Q2
 {
    public static boolean StrCmpX(String src, String dest)
    {
      int iCnt=0;
      
          char Arr[]=src.toCharArray();
          char Brr[]=dest.toCharArray();
          if(Arr.length != Brr.length)
          {
            return false;
          }
          for(iCnt=0;iCnt<Arr.length;iCnt++)
          {
            if(Arr[iCnt]!=Brr[iCnt])
          {
            return false;
          }
    }
        return true;
    }
    public static void main(String arg[])
    {
      String str1=null,str2=null;
      boolean bRet = false;
      Scanner sobj = new Scanner(System.in);
      System.out.println("String one is : ");
      str1=sobj.nextLine();
      System.out.println("String two is : ");
      str2=sobj.nextLine();
      bRet=StrCmpX(str1,str2);
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
 
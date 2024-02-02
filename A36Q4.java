/*
Q4)  Accept string from user and reverse the contents of that string by toggling the case.

Input: "aCBdef"
Output:"FEDcbA"


Program Layout:
*/
import java.util.*;

 class A36Q4
 {
    public static String StrRevTogX(String str)
    {
          int iCnt=0;
          String Rev = null;
          char Arr[]=str.toCharArray();
           for (int start = 0, end = Arr.length - 1; start < end; start++, end--) 
           {
            char temp = Arr[start];
            Arr[start] = toggleCase(Arr[end]);
            Arr[end] = toggleCase(temp);
        }

        return new String(Arr);
    }
    public static char toggleCase(char ch) 
    {
        if (Character.isUpperCase(ch)) {
            return Character.toLowerCase(ch);
        } else if (Character.isLowerCase(ch)) {
            return Character.toUpperCase(ch);
        }
        return ch;
    }
    public static void main(String args[])
    {
      String stri = null , sRet = null;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Your string is : ");
      stri=sobj.nextLine();

      sRet=StrRevTogX(stri);
      System.out.println("Toggled string is : "+sRet);
    }
 }
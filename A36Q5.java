/*
Q5)  Accept string from user and check whether the string is palindrome or not without considering its case.

Input: "1abccBA1"
Output:TRUE


Program Layout:
*/
import java.util.*;

 public class A36Q5 
 {
    public static boolean isPalindrome(String str) 
    {
        
        String processedStr = str.replaceAll("\\s", "").toLowerCase();

        int left = 0;
        int right = processedStr.length() - 1;

        while (left < right) {
            if (processedStr.charAt(left) != processedStr.charAt(right)) {
                return false; 
            }
            left++;
            right--;
        }

        return true; 
    }

    public static void main(String[] args)
     {
      String stri = null;
      boolean bRet=false;
      
      Scanner sobj = new Scanner(System.in);
      System.out.println("String is : ");
      stri=sobj.nextLine();
     
     bRet=isPalindrome(stri);
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

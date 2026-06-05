class Solution {
    public boolean isPalindrome(String s) {
        String rev=""; String str="";
        for(int i =0;i< s.length();i++)
        {
            char ch=Character.toLowerCase(s.charAt(i));
            if(Character.isLetter(ch)||Character.isDigit(ch))
            {
                str+=ch;
            }
        }
for(int i =str.length() -1;i>=0;i--)
{    rev+= str.charAt(i);
}
if(str.equals(rev))
{
    return true;
}
else
return false;
    }
}

class Solution {
    public void reverseString(char[] s) {
        String str= new String(s);
        String rev="";
        for(int i=str.length()-1;i>=0;i--)
        {
            rev +=str.charAt(i);
        }
        for(int i =0;i<str.length();i++)
        {
            s[i]=rev.charAt(i);
        }
    }
}

class Solution {
public:
    bool isPalindrome(string s) {
        
        string temp = "";

        for(int i = 0;i<s.length();i++)
        {
            if((s[i]>='a' && s[i]<='z' )|| (s[i]>='A' && s[i]<='Z' ) || (s[i]>='0' && s[i]<='9' ))
            {
                temp += tolower(s[i]);
            }
        
        }
        
        
        string temp2 = temp;
        reverse(temp.begin(),temp.end());
        return temp==temp2;
    }
};
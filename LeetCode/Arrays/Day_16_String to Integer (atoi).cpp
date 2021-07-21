/**class Solution {
public:
    int myAtoi(string s) {
        int signal = 1;
        int i = 0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            signal = -1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        else{
            
        }
    
        string temp = "";
        for(i;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9' )
            {
                temp += tolower(s[i]);
            }
            
            else{
                break;
            }
        
        }
        if(temp.length()==0){
            return 0;
        }
        
        else{
        int x = stoi(temp);
        x = x*signal;
            
        if(x>2147483647){
            x = 2147483647;
        }
        else if(x<=-2147483649){
            x = -2147483648;
        }
            
        return x;
        }
    }
};**/

class Solution {
public:
int c(char a){
switch(a){
case '0': return 0;
case '1': return 1;
case '2': return 2;
case '3': return 3;
case '4': return 4;
case '5': return 5;
case '6': return 6;
case '7': return 7;
case '8': return 8;
case '9': return 9;
default: return -1;
}
}

int myAtoi(string s) {
    int l = s.size();
    string t;
    bool found = false;
    bool isP;
    for(int i = 0; i < l; i++){
        if(!found){
            if(s[i] == ' ') continue;
            else if(s[i] == '-') {
                isP = false;
                found = true;
            } else if(s[i] == '+') {
                isP = true;
                found = true;
            }
            else if(c(s[i]) == -1) return 0;
            else {
                found = true;
                isP = true;
                t += s[i];
            }
        } else {
            if(c(s[i]) == -1) break;
            else t += s[i];
        }
    }
    int ans = 0;
    int pop = 0;
    if(isP){
        for(char a : t){
            pop = c(a);
            if(ans > INT_MAX/10 || ans == INT_MAX/10 && pop > 7) return INT_MAX;
            ans = ans * 10 + pop;
        }
    } else {
        for(char a : t){
            pop = c(a);
            if(ans < INT_MIN/10 || ans == INT_MIN/10 && pop > 8) return INT_MIN;
            ans = ans * 10 - pop;
        }
    }
    return ans;
}
};
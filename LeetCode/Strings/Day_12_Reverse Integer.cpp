class Solution {
public:
    int reverse(int x) {
        
        int sig = 1;
        if(x<0){
            sig = -1;
        }
        x = abs(x);
        
        string s = to_string(x);
        std::reverse(s.begin(),s.end());
        
        try{
            x = stoi(s);
        }catch(...){
            return 0;
        }
        
        x = sig*x;
        return x;
        
    }
};
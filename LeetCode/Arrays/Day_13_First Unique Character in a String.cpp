class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> hash;
        int index = -1;
        for(char ch : s){
            if(hash.find(ch)==hash.end()){
                hash.insert({ch, 0});
            }
            else{
                hash[ch]++;
            }
        }
        
        for(int i=0;i<s.length();i++){
            if(hash[s[i]]==0){
                index = i;
                break;
            }
                
                
        }
                    return index;
    }
};
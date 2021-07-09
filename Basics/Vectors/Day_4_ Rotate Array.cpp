class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        std::rotate(nums.begin(),nums.begin()+nums.size()-k,nums.end());
/****        
        if (k==0){}
        else{
            for(int i=0;i<k;i++){
                nums.insert(nums.begin(),nums.back());
                nums.erase(nums.end()-1);
            }
        }
            
 ****/      
    }
};
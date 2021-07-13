class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        if(nums.size()==1) return;
        vector<int>::iterator it;
        int j=0;
        int i=0;
        while(j<nums.size())
        {
            j++;
            if(nums[i]==0)
            {
                it = nums.begin()+i;
                nums.erase(it);
                nums.push_back(0);
                
            }
            else{i++;}
        }
       nums.shrink_to_fit();
        
        
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int, int> map;
        for(int i=0; i<nums.size();i++){
            
            int cn = nums[i];
            if(map[cn]==0){map[cn]=1;}
            else{map[cn]+=1;}
            
        }
        
        for(int i=0; i<nums.size();i++){
            
            if(map[nums[i]]==1) return nums[i];
        }
        
        throw invalid_argument("Not invalid Input");
        
        /**sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size()-2;i=i+2){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
            else{
                return nums[nums.size()-1];
            }
        }
        return 0;**/
    }
};
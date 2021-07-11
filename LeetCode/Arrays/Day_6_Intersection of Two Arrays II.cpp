class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nums3;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i = nums1.size();
        int j = nums2.size();
        
        while(i>0&&j>0)
        {
            int a = nums1[i-1];
            int b = nums2[j-1];
            
            if(a==b){
                nums3.push_back(a);
                i--;
                j--;
            }
            else if(a>b){
                i--;
            }
            else{
                j--;
            }
            
        }
        return nums3;
    }
};
class Solution {
public:
    
    
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        int tag=0;
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]<prices[tag]){
                
            }
            else{
                profit+=prices[i]-prices[tag];
                
            }
            tag = i;
        }
        return profit;
    }
};
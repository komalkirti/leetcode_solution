class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int purchasePrice = prices[0];
        int ans=0;
        for(int i=1;i<n;i++){
            if(purchasePrice<prices[i]){
                ans=ans+(prices[i]-purchasePrice);
                purchasePrice=prices[i];
            }
            purchasePrice=prices[i];
        }
        return ans;
        
    }
};
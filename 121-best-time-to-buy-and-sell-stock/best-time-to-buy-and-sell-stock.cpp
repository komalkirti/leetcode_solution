class Solution {
public:
    int maxProfit(vector<int>& prices) {
// first solution
        int minPrice=INT_MAX;
        int ans=INT_MIN;
        for(int price:prices){
            minPrice= min(minPrice,price);
            ans=max(ans,price-minPrice);
        }
        return ans;
        
    }
};
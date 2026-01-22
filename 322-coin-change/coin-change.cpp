class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        int n=coins.size();
        vector<int>ans(amount+1,amount+1);
        ans[0]=0;

        for(int i=0;i<=amount;i++){
            for(int j=0;j<n;j++){
                if(coins[j]<=i){
                    ans[i]=min(ans[i],1+(ans[i-coins[j]]));
                }
            }
        }
        if(ans[amount]>amount) return -1;
        return ans[amount];
        
    }
};
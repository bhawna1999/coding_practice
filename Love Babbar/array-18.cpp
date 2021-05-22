class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int cheapest=prices[0];int profit=0;
        for(int i=1;i<prices.size();i++){
          profit= max(profit,prices[i]-cheapest);
            cheapest=min(cheapest,prices[i]);
        }
        return profit;
    }
};

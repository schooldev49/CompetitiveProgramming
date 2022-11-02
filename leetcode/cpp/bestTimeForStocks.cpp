class Solution {
public:
    /*int current = INT_MIN;
    int maximum = INT_MAX;
    int currentIndex = -1;
    int maximumIndex = -1;
    int getMaxArray(vector<int>&vector){
        
        for (int i=0; i<vector.size(); i++){
            if (vector[i] > current) current = vector[i];
        }
        return current;
    }
    int getMinArray(vector<int>&vector){
        
         for (int i=0; i<vector.size(); i++){
            if (vector[i] < maxiumum) maxiumum = vector[i];
        }
        return maxiumum;
    }*/
    int maxProfit(vector<int>& prices) {
       int lowest = INT_MAX;
       int profit = 0;
       int profittoday = 0;
       for (int i=0; i<prices.size(); i++){
           if (prices[i] < lowest) lowest = prices[i];
           
           profittoday = prices[i] - lowest; 
           
           if (profit < profittoday){
               profit = profittoday;
           }
       }
      
        
                 
        
        return profit;
    }
};



/*

GIVEN AN ARRAY PRICES


PRICES[i] = PRICE OF GIVEN STOCK ON iTH DAY

SIGNLE DAY TO BUY ONE STOCK

DIFFERENT DAY IN FUTURE TO SELL STOCK
*/

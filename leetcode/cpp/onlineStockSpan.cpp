#include <deque>

class StockSpanner {
public:
    deque<pair<int,int>> stockSpan; 
    StockSpanner() {
        
    }
    
    int next(int price) {
        int answer = 0;
        while (!stockSpan.empty() && stockSpan[0].first <= price){
            answer+= stockSpan[0].second;
            stockSpan.pop_front();
        }
        answer++;
        stockSpan.push_front({price,answer});
        return answer;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

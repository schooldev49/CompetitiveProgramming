class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if (s.length() % 2 !=0) return false;
        for (char i : s){
           if (i == '(' || i=='[' || i=='{'){
               stack.push(i);
           } else {
             if (stack.empty()) return false;
           char top = stack.top();
            if (i == ')' && top == '(' || i==']' && top=='[' || i=='}' && top == '{'){
                stack.pop();

            } else {
              return false;
              }
           }
        }
        return stack.empty();
    }
};

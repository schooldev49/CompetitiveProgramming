

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> dupes; // initializing a stack
        
        for (char i : s){ // iterating through the string
            if (!dupes.empty() && dupes.top() == i){ // if the stack is not empty and the stack previously pushed element (top) is i
                dupes.pop(); // remove the top element and ignore this char
            } else {
                dupes.push(i); // push this char to the top of the stack
            }
        }
        string answer;

        while (!dupes.empty()){ // iterate through stack
            answer.push_back(dupes.top()); // put top element in back of string
            dupes.pop();  // remove top
        }

        reverse(answer.begin(),answer.end()); // reverse, since we put top element in back of string originally

        return answer; // return 
    }
};

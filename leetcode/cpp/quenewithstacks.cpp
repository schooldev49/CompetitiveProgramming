class MyQueue {
private: 
    stack<int> queneInput;
    stack<int> queneOutput;
public:
    /*
    empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Del
    */
    // FIRST COME, FIRST SERVE
   
    void push(int x) {
       
       queneInput.push(x);
    }
    
    int pop() {
        peek();
        int first = queneOutput.top();
        queneOutput.pop();
        return first;
    }
    
    int peek() {
        if (queneOutput.empty()){
                 while (!queneInput.empty()){
                cout << queneInput.top();
                queneOutput.push(queneInput.top()), queneInput.pop();
            }
        }
        return queneOutput.top();
    }
    
    bool empty() {
        return queneOutput.empty() && queneInput.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

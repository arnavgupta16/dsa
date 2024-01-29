//https://leetcode.com/problems/implement-queue-using-stacks/description/?envType=daily-question&envId=2024-01-29

#pragma GCC optimize("O3", "unroll-loops")
class MyQueue {
    stack<int> s0, s1;
    int front=0;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if (s0.empty()) front=x;
        s0.push(x);
    }
    
    int pop() {// amortized O(1)
        if (s1.empty()){
            while(!s0.empty()){
                int x=s0.top();
                s0.pop();
                s1.push(x);
            }
        }
        int x=s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        if (!s1.empty()){
            return s1.top();
        }
        return front;
    }
    
    bool empty() {
        return s0.empty() && s1.empty();
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

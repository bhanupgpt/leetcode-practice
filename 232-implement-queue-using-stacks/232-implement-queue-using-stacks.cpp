class MyQueue {
public:
    stack <int> st1;
    stack <int> st2;
    int count = 0;
    MyQueue() {
        
    }
    
    void push(int x) {
        // while(!st1.empty()) {
        //     st2.push(st1.top());
        //     st1.pop();
        // }
        // st2.push(x);
        // while(!st2.empty()) {
        //     st1.push(st2.top());
        //     st2.pop();
        // }
        st1.push(x);
        count++;
    }
    
    int pop() {
        // int c = st1.top();
        // st1.pop();
        // return c;
        if(st2.empty()) {
            while(!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }    
            int c = st2.top();
            st2.pop();
            count--;
            return c;   
        }
        else {
            int c = st2.top();
            st2.pop();
            count--;
            return c;
        }
    }
    
    int peek() {
        if(st2.empty()) {
            while(!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }    
            return st2.top(); 
        }
        else {
            return st2.top();
        } 
    }
    
    bool empty() {
        return (count==0);
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
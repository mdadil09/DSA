class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
      if(q1.empty())
          return -1;
        else {
            while(q1.size() != 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int temp = q1.front();
            q1.pop();
            q1.swap(q2);
            return temp;
        }
    }
    
    int top() {
        if(q1.empty())
            return -1;
        else
        {
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            int temp=q1.front();
            q1.pop();
            q2.push(temp);
            q1.swap(q2);
            return temp;
        }
    }
    
    bool empty() {
        if(q1.empty())
            return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
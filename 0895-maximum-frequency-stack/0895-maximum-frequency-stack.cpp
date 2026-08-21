class FreqStack {
    unordered_map<int, int> freq;
    unordered_map<int , stack<int>> st;
    int maxFreq = 0;
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        st[freq[val]].push(val);
        if(freq[val] > maxFreq){
            maxFreq = freq[val];
        }

    }
    
    int pop() {
        int top = st[maxFreq].top();
        st[maxFreq].pop();
        freq[top]--;
        if(st[maxFreq].empty()){
            maxFreq--;
        }
        return top;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
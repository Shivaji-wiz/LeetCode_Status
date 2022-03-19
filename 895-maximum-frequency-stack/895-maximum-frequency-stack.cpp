class FreqStack {
public:
    map <int, int> mp;
    map <int, vector <int> > reverse_map;
    FreqStack() {
        
    }
    
    void push(int val) {
        
        mp[val] ++;
        reverse_map[mp[val]].push_back(val);
    }
    
    int pop() {
        
        auto  end_iterat = (reverse_map.rbegin());
        int ans = (end_iterat->second)[end_iterat->second.size()-1];
        int val = end_iterat->first;
        
        reverse_map[val].pop_back();
        if((end_iterat->second).size() == 0) {
            reverse_map.erase(val);
        }
        mp[ans]--;
        return ans;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
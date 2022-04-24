class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>customer;
    unordered_map<string,unordered_map<string,vector<int>>>avg_time;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        customer[id] = {stationName ,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        avg_time[customer[id].first][stationName].push_back((double)(t-customer[id].second));
        
        customer[id] = {"",0};
    }
    
    double getAverageTime(string startStation, string endStation) {
        int total_time = 0;
        
        for(auto it: avg_time[startStation][endStation]){
            total_time += it;
        }
        
        return (double)total_time/avg_time[startStation][endStation].size();
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
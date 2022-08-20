class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if(target<=startFuel) return 0;                     //If target is within the range,no need to refuel the car
        
        int pos=startFuel;                                  //Moved startFuel distance
        int steps=0;  
        int i=0,n=stations.size();
        priority_queue<int>maxFuelingStations;              // max priority queue to maintain the station with largest fuel capacity
        
        while(pos < target){                                // Until the target location is reached, try all
            while(i<n && pos>= stations[i][0]){             // possible stations, depending on the fuel it has
                maxFuelingStations.push(stations[i++][1]);     
            }
            if(maxFuelingStations.empty()) return -1;        // If no stations, target is not reachable
            
            int dist=maxFuelingStations.top();               // Get the fuel from the station with maximum fuel
            maxFuelingStations.pop();                        // Remove that station, so need to get a refuel from there.
            
            pos+= dist;                                     // Moved again after the refuel
            steps++;                                        // Refuel the car from the station 
        }
        return steps;        
    }
};
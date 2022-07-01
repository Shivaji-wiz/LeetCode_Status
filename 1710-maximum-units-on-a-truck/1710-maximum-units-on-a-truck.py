class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        
        boxTypes.sort(key = lambda box : box[1],reverse = True)
        
        totalunits = 0
        
        for NoB,UpB in boxTypes:
            
            NB = min(truckSize,NoB)
            totalunits += NB*UpB
            
            truckSize -= NB
            
        return totalunits
            
        
        
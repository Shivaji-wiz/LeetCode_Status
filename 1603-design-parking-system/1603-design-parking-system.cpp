class ParkingSystem {
    int arr[4],count[4] = {0};
public:
    ParkingSystem(int big, int medium, int small) {
        arr[1]=big;
        arr[2]=medium;
        arr[3]=small;
    }
    
    bool addCar(int carType) {
        if(arr[carType]>count[carType]){
            count[carType]++;
        }
        else{
            return false;
        }
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
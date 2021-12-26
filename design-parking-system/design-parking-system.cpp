class ParkingSystem {
public:
    map<int,int> slots;
    ParkingSystem(int big, int medium, int small) {
        slots[1]+=big;
        slots[2]+=medium;
        slots[3]+=small;
    }
    
    bool addCar(int carType) {
        if(slots[carType]) {
            // cout<<"AVAILABLE\n"<<carType<<"->"<<slots[carType]<<endl;
            slots[carType]-=1;
            return true;
        }
        // cout<<"NOT\n"<<carType<<"->"<<slots[carType]<<endl;
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
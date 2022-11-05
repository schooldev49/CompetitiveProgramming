class ParkingSystem {
public:
    int bigT = 0;
    int mediumT = 0; 
    int smallT = 0;
    ParkingSystem(int big, int medium, int small) {
        this->bigT = big;
        this->mediumT = medium;
        this->smallT = small;
    }
    
    bool addCar(int carType) {
        bool status = true;
        switch(carType){
            case 1:
                bigT > 0 ? bigT -=1 : status=false;
                break;

            case 2:
                mediumT > 0 ? mediumT -=1 : status=false;
                break;

            case 3:
                smallT > 0 ? smallT -=1 : status=false;
                break;

            default:
                break;
        }
        return status;
        // big parking: 1
        // medium parking: 1
        // small parking: 0

        // addCar (carType big)
        // addCar (carType medium)
        // addCar (carType small) 
    };
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

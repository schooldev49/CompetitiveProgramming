class ParkingSystem {
public:
    int bigT = 0;
    int mediumT = 0; 
    int smallT = 0;
    ParkingSystem(int big, int medium, int small) {
        this->bigT = big; //  # big parking slots
        this->mediumT = medium;  // # medium parking slots
        this->smallT = small; // # small parking slots
    }
    
    bool addCar(int carType) { 
        bool status = true; // default 
        switch(carType){
            case 1: // big parking slot
                bigT > 0 ? bigT -=1 : status=false; // if # of big parking slots greater than 0 then subtract one big parking spot. else status = false.
                break; // prevent from going onto other conditions 

            case 2: // medium parking slot
                mediumT > 0 ? mediumT -=1 : status=false; // if # of medium parking slots greater than 0 then subtract one medium parking spot. else status = false.
                break;

            case 3: // small parking slot
                smallT > 0 ? smallT -=1 : status=false;  // if # of small parking slots greater than 0 then subtract one small parking spot. else status = false.
                break;

            default: // not possible, but just for good practice
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

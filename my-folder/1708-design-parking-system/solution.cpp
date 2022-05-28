class ParkingSystem
{
public:
    int bigCar = 0, mediumCar = 0, smallCar = 0;

    ParkingSystem(int big, int medium, int small)
    {
        bigCar = big;
        mediumCar = medium;
        smallCar = small;
    }

    bool addCar(int carType)
    {
        if (carType == 1)
        {

            if (bigCar > 0)

            {
                bigCar--;
                return true;
            }
        }
        else if (carType == 2)
        {

            if (mediumCar > 0)

            {
                mediumCar--;
                return true;
            }
        }
        if (carType == 3)
        {

            if (smallCar > 0)

            {
                smallCar--;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

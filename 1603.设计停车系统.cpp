/*
 * @lc app=leetcode.cn id=1603 lang=cpp
 *
 * [1603] 设计停车系统
 */

// @lc code=start
class ParkingSystem {
public:
    int bigcar, mediumcar, smallcar;
    ParkingSystem(int big, int medium, int small) : bigcar(big),mediumcar(medium), smallcar(small) {}
    
    bool addCar(int carType) {
        if( carType == 1 )
        {
            if( bigcar > 0 )
            {
                bigcar--;
                return true;
            }
            return false;
        }
        if( carType == 2 )
        {
            if( mediumcar > 0 )
            {
                mediumcar--;
                return true;
            }
            return false;
        }
        if( carType == 3 )
        {
            if( smallcar > 0 )
            {
                smallcar--;
                return true;
            }
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
// @lc code=end


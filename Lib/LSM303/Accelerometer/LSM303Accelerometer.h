//
// Created by Michael Brookes on 05/05/2016.
//

#ifndef LSM303_ACCELEROMETER_LSM303ACCELEROMETER_H
#define LSM303_ACCELEROMETER_LSM303ACCELEROMETER_H


#include "../LSM303DLHC.h"
#include <bitset>

using namespace std;

class LSM303Accelerometer : public LSM303DLHC {

public:

    LSM303Accelerometer( unsigned char _DeviceAddress = ACCEL_ADDRESS, int _BusId = 1 );

private:

};

#endif //LSM303_ACCELEROMETER_LSM303ACCELEROMETER_H

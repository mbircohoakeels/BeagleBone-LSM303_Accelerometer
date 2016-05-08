//
// Created by Michael Brookes on 05/05/2016.
//

#ifndef LSM303_ACCELEROMETER_LSM303ACCELEROMETER_H
#define LSM303_ACCELEROMETER_LSM303ACCELEROMETER_H


#include "../LSM303DLHC.h"
//#include "../Orientation/Orientation.h"
#include <bitset>

using namespace std;

class LSM303Accelerometer : public LSM303DLHC {

public:

    LSM303Accelerometer( unsigned char _DeviceAddress, int _BusId );

    //Orientation *Position;

    //void SetX( );
    //void SetY( );
    //void SetZ( );

private:

};

#endif //LSM303_ACCELEROMETER_LSM303ACCELEROMETER_H

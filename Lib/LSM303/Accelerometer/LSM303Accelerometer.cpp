//
// Created by Michael Brookes on 05/05/2016.
//

#include "LSM303Accelerometer.h"

LSM303Accelerometer::LSM303Accelerometer( unsigned char _DeviceAddress, int _BusId ) {
    this->SetDeviceAddress( _DeviceAddress );
    this->SetBusId( _BusId );
    this->InitI2C();
    this->LoadRecommendedFlightSettings( );
    this->InitAccelerometer( );
}
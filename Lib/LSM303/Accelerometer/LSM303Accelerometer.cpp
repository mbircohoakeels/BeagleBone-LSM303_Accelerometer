//
// Created by Michael Brookes on 05/05/2016.
//

#include "LSM303Accelerometer.h"

LSM303Accelerometer::LSM303Accelerometer( unsigned char _DeviceAddress, int _BusId ) {
    this->SetDeviceAddress( _DeviceAddress );
    this->SetBusId( _BusId );
    this->InitI2C( );
    this->LoadRecommendedFlightSettings( );
    this->InitAccelerometer( );
}

double LSM303Accelerometer::Roll( ) {
    return ( ( atan2 ( ( double )this->X, sqrt( double( this->Y * this->Y + this->Z * this->Z ) ) ) * 180.0 ) / M_PI );
}

double LSM303Accelerometer::Pitch( ) {
    return ( atan2 ( ( double )this->Y, ( double )this->Z ) * 180.0 ) / M_PI;
}
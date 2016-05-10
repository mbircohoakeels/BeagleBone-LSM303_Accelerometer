//
// Created by Michael Brookes on 05/05/2016.
//

#include "LSM303Accelerometer.h"

LSM303Accelerometer::LSM303Accelerometer( unsigned char _DeviceAddress, int _BusId ) {
    this->SetDeviceAddress( _DeviceAddress );
    this->SetBusId( _BusId );
    this->InitAccelerometer( );
}

short LSM303Accelerometer::X( ) {
    this->GetX( );
}

short LSM303Accelerometer::Y( ) {
    this->GetY( );
}

short LSM303Accelerometer::Z( ) {
    this->GetZ( );
}

//void LSM303Accelerometer::SetPitchAndRoll( void ) {
    //this->Pitch  = ( atan2 ( ( double ) this->Orientation->Y, ( double ) this->Orientation.Z ) * 180.0 ) / M_PI;
    //this->Roll = (( atan2 ( ( double ) this->Orientation->X, sqrt( ( double ) this->Orientation.Y * ( double ) this->Orientation.Y + ( double ) this->Orientation.Z * ( double ) this->Orientation.Z ) ) * 180.0 ) / M_PI);
//}
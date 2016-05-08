//
// Created by Michael Brookes on 05/05/2016.
//

#include "LSM303Accelerometer.h"

LSM303Accelerometer::LSM303Accelerometer( unsigned char _DeviceAddress, int _BusId ) {
    this->SetDeviceAddress( _DeviceAddress );
    this->SetBusId( _BusId );
    this->InitDevice( );
    //Position = new Orientation;
}
/*
void LSM303Accelerometer::SetX( ) {
    Position->X = ( (
        this->GetValueFromRegister( OUT_X_H_A ) << 8 ) |
        this->GetValueFromRegister( OUT_X_L_A )
    );
}

void LSM303Accelerometer::SetY( ) {
    Position->Y = ( (
        this->GetValueFromRegister( OUT_Y_H_A ) << 8 ) |
        this->GetValueFromRegister( OUT_Y_L_A ) );
}

void LSM303Accelerometer::SetZ( ) {
    Position->Z = ((
       this->GetValueFromRegister( OUT_Z_H_A ) << 8 ) |
       this->GetValueFromRegister( OUT_Z_L_A )
    );
}
*/
//void LSM303Accelerometer::SetPitchAndRoll( void ) {
    //this->Pitch  = ( atan2 ( ( double ) this->Orientation->Y, ( double ) this->Orientation.Z ) * 180.0 ) / M_PI;
    //this->Roll = (( atan2 ( ( double ) this->Orientation->X, sqrt( ( double ) this->Orientation.Y * ( double ) this->Orientation.Y + ( double ) this->Orientation.Z * ( double ) this->Orientation.Z ) ) * 180.0 ) / M_PI);
//}
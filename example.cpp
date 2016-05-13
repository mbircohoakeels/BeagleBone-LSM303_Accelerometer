
#include "Lib/LSM303/Accelerometer/LSM303Accelerometer.h"

using namespace std;

void main( ) {
    using namespace I2C;

    LSM303Accelerometer *Accelerometer;

    Accelerometer = new LSM303Accelerometer( );

    while( 1 ) {
        cout << "Roll = " << Accelerometer->Roll( ) << endl;
        cout << "Pitch = " << Accelerometer->Pitch( ) << endl;
        usleep( Accelerometer->DataTimer );
    }

}

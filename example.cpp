
#include "Lib/LSM303/Accelerometer/LSM303Accelerometer.h"

using namespace std;

int main( ) {

    using namespace abI2C;

    LSM303Accelerometer *Accelerometer;

    Accelerometer = new LSM303Accelerometer( );

    Accelerometer->SetPitchAndRollAverages( 50 );

    cout << "Averages : " << endl <<
            "    Pitch = " << Accelerometer->avgPitch << endl <<
            "    Roll = " << Accelerometer->avgRoll << endl;

    while( 1 ) {
        cout << "Roll = " << Accelerometer->Roll( ) << endl;
        cout << "Pitch = " << Accelerometer->Pitch( ) << endl;
        usleep( Accelerometer->DataTimer );
    }

}
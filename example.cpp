
#include "Lib/LSM303/Accelerometer/LSM303Accelerometer.h"

using namespace std;

int main( ) {
    using namespace I2C;

    LSM303Accelerometer *Accelerometer;

    Accelerometer = new LSM303Accelerometer( );

    while( 1 ) {
        cout << "Refresh Rate = " << Accelerometer->DataTimer << endl;
        cout << "X = " << Accelerometer->X << endl;
        cout << "Y = " << Accelerometer->Y << endl;
        cout << "Z = " << Accelerometer->Z << endl;
        usleep( Accelerometer->DataTimer + 1000000 );
    }
    return 0;
}

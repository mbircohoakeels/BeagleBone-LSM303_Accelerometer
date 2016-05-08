
#include "Lib/LSM303/Accelerometer/LSM303Accelerometer.h"

using namespace std;

int main( ) {
    using namespace I2C;

    LSM303Accelerometer *Accelerometer;

    Accelerometer = new LSM303Accelerometer( );

    Accelerometer->LoadRecommendedFlightSettings( );

    Accelerometer->SetDataTimer( );

    //while( 1 ) {
        Accelerometer->X( );
        Accelerometer->Y( );
        Accelerometer->Z( );

        cout << "Refresh Rate = " << Accelerometer->DataTimer << endl;
        //cout << "X = " << bitset<16>( Accelerometer->Position->X ) << " = " << Accelerometer->Position->X << endl;
        //cout << "Y = " << bitset<16>( Accelerometer->Position->Y ) << endl;
        //cout << "Z = " << bitset<16>( Accelerometer->Position->Z ) << endl;
        //usleep( 5000 );
    //}
    return 0;
}

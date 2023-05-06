#include "mbed.h"


PwmOut red(p23);
PwmOut green(p24);
PwmOut blue(p25);


AnalogIn xaxis(p16);
AnalogIn yaxis(p17);
AnalogIn zaxis(p18);

int main() {
    while(1) {
       
        float x = xaxis.read();
        float y = yaxis.read();
        float z = zaxis.read();
        float r = x;
        float g = y;
        float b = z;

        
        red.write(r);
        green.write(g);
        blue.write(b);

        
        wait_ms(10);
    }
}

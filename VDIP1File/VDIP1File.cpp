
#include "VDIP1File.h"

VDIP1File::VDIP1File(int rx, int tx)
{
    serial = new SoftwareSerial(rx, tx);
}

void VDIP1File::open(string file)
{
    filename = file;

    serial.print("OPW ");
    serial.print(file);
    serial.print((byte) 13);
}

void VDIP1File::write(string data)
{
    int len = data.length();

    // we are going to write the data along with the \n character so
    // that is why we need this line
    len += 1;

    serial.print("WRF ");
    serial.print(itoa(len));
    serial.print(data);

    serial.print((byte) 13);
}

void VDIP1File::close()
{
    serial.print("CLF ");
    serial.print(filename);
    serial.print((byte) 13);
}

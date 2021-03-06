#include "VDIP1File.h"

VDIP1File::VDIP1File(int rx, int tx) : serial(rx, tx)
{
}

void VDIP1File::open(char* file)
{
    filename = file;

    serial.print("OPW ");
    serial.print(file);
    serial.write((byte) 13);
}

void VDIP1File::write(char* data)
{
    int len = strlen(data);

    serial.print("WRF ");
    serial.print(len);
    serial.write((byte) 13);

    // print the actual data
    serial.print(data);
}


void VDIP1File::writeln(char* data)
{
    int len = strlen(data);

    serial.print("WRF ");
    serial.print(len+1);
    serial.write((byte) 13);

    // print the actual data
    serial.print(data);
    serial.write((byte) 13);
}

void VDIP1File::close()
{
    serial.print("CLF ");
    serial.print(filename);
    serial.write((byte) 13);
}

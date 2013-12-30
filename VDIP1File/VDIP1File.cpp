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
    char buff[30];

    // convert int to string (sorta)
    itoa(len, buff, 10);

    serial.print(buff);
    serial.write((byte) 13);

    // print the actual data
    serial.print(data);
}


void VDIP1File::writeln(char* data)
{
    char buff[len(data) + 2];
    sprintf(buff, "%s\n", data);

    VDIP1File::write(buff);
}

void VDIP1File::close()
{
    serial.print("CLF ");
    serial.print(filename);
    serial.write((byte) 13);
}

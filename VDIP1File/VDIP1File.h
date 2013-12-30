#ifndef VDIP1File_H
#define VDIP1File_H

#include "Arduino.h"

#include <cstring>
#include <SoftwareSerial.h>



class VDIP1File
{
	public:
		VDIP1File(int rx, int tx);
        void open(char* file);
        void write(char* data);
        void writeln(char* data);
        void close();
	private:
        char* filename;
        SoftwareSerial serial;
};

#endif

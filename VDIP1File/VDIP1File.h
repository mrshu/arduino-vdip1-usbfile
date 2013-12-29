#ifndef VDIP1File_H
#define VDIP1File_H

#include "Arduino.h"

#include <SoftwareSerial.h>
#include <string>

class VDIP1File
{
	public:
		VDIP1File(int rx, int tx);
        void open(std::string file);
        void write(std::string data);
        void close();
	private:
        std::string filename;
        SoftwareSerial serial;
};

#endif

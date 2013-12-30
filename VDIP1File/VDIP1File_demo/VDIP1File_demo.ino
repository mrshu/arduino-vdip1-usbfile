#include <SoftwareSerial.h>
#include <VDIP1File.h>


VDIP1File f(5, 4);
void setup()
{
    f.open("TEST.TXT");
    f.write("some testing input");
    f.close();
}

void loop()
{

}

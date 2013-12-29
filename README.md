VDIP1File: a library for working with VDIP1
===========================================



Example usage
-------------

Here is what it should look like

    #include <SoftwareSerial.h>
    #include <VDIP1File.h>


    VDIP1File f = new VDIP1File(5, 4);
    void setup()
    {
        f.open("test.txt");
        f.write("some testing input");
        f.close();
    }

    void loop()
    {

    }

VDIP1File: a library for working with VDIP1
===========================================

This is a small library which shall help with writing (and later reading
**TODO**) files to (and from) a USB stick with the *VDIP1*.


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

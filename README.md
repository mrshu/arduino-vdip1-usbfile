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
        f.open("TEST.TXT");
        f.write("some testing input");
        f.close();
    }

    void loop()
    {

    }


Installation
------------

First of all either clone this repository or
[download](https://github.com/mrshu/arduino-vdip1-usbfile/archive/master.zip)
its contents and unzip it.

On unix-like filesystems you can run

    $ make install

This will install the library into the `~/sketchbook/library/` directory, which
is supposed to contain all your 'user' libraries.


On Windows please place the 'VDIP1File' folder into `My Documents -> Arduino -> libraries`.

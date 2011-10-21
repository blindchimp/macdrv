Fri Oct 21 09:37:12 MST 2011
WARNING

You will need the latest cdc32 source code to compile this.
The xcode project has header includes that point to the
cdc32 source, like this:
/Users/dwight/depot/dwycore/bld/cdc32/winemu
/Users/dwight/depot/dwycore/bld/cdc32
/Users/dwight/depot/dwycore/ins/dbg/inc

The reason for this is that these drivers need access to some
of the internal audio and video capture interfaces that aren't 
normally exported. This is part of the internal core, rather than
a separate module. This could use some improvement, but for now, it
is ok.


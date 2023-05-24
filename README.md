# Instruction to configure Graphics Library in DevC++:

1. Copy "graphics.h" and "winbgim.h" files to "include" folder of dev C++ directory.
  Default location is ("C:\Program Files (x86)\Dev-Cpp\MinGW\include\") and paste in this location.

2. Copy "libbgi.a" to file to "lib" folder of dev C++ directory.
   Default location is ("C:\Program Files (x86)\Dev-Cpp\MinGW\lib\") and paste in this location.

3. Open Dev c++, select TDM-GCC 4.9.2 32-bit Release and go to (tools > Compiler > tick the second option i.e Add the following commandswhen calling the linker)
and paste this "-static-libgcc -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32" in the box.

4. Click "OK".

## NOTE:
1. The graphics.h will work only in the program saved in ".cpp" format.

**To check the graphics.h is working or not**
<hr>
Create a new console application in ".cpp" format and copy the codes given below, paste it in the
file you created and click "Build and Run" button or click "F9" key from your keyboard..

```cpp
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    circle(200,200,100);
    getch();
}
```

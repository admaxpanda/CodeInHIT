#include <windows.h>
class console
{
    HANDLE sout;
    CONSOLE_SCREEN_BUFFER_INFO sinf;
    console();
    ~console();
}asd;
console::console()
{
    sout = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(sout,&sinf);
}
console::~console()
{
    CloseHandle(sout);
}

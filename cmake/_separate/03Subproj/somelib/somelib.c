#include "somelib.h"

void hello(void) {
    setlocale(LC_CTYPE, "");
    wprintf(L"hi :)\nHow are you?\n");
}

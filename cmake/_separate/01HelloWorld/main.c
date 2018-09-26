#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main(void) {

    setlocale(LC_CTYPE, "");
    wprintf(L"Привет, мир\n");

    return 0;
}

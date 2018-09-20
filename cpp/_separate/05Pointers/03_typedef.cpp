/*
cpp-file pattern for c++ study

Copyright (C) 2016,  Khudyashev Ivan
GNU GPL https://www.gnu.org/licenses/gpl-3.0.ru.html

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#include <iostream>
#include <string>

typedef unsigned char uchar;
typedef char** ppchar;
typedef char* pchar;
typedef int intmas7[7];
typedef int* pintmas7[7];
typedef pintmas7* ppintmas;

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program";
    uchar c = 200;
    std::cout<<"\nuchar_value = "<<(int)c<<"; uchar_symb = "<<c;
    int a = 10, b = 11;
    intmas7 m = {a, b};
    std::cout<<"\n"<<m[5]<<" "<<m[6]<<" "<<m[7]<<" "<<m[10];
    pintmas7 pm = {&a, &b};
    ppintmas ppm = &pm;
    std::cout<<"\n adr of mas = "<<ppm;

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
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

void f(char s)
{
    std::cout<<"\nf("<<s<<")";
}

void g(char& s)
{
    std::cout<<"\ng("<<s<<") // can change s";
}

void h(const char& s)
{
    std::cout<<"\nh("<<s<<") // func h can get constant on argument";
}

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program";
    char c = '0';
    unsigned char uc = '1';
    signed char sc = '2';
    f('a'); f(49); f(3300); f(c); f(uc); f(sc);
    g(c); g((char&)uc); /*g(sc);*/ //g('a'); g(49); g(3300);
    h('a'); h(49); h(3300); //h(c); h(uc); h(sc);

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
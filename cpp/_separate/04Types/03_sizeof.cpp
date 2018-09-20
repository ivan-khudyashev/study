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

enum enum1:short{zero, one, two, three, four, five, six, seven};
enum enum2{a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program (Привет!)";

    std::cout<<"\nSizes of basic types:\nsizeof(bool) = "<<sizeof(bool)\
	<<"\n sizeof(char) = "<<sizeof(char)<<", sizeof(unsigned char) = "<<sizeof(unsigned char)\
	<<"\n sizeof(short) = "<<sizeof(short)<<", sizeof(unsigned short) = "<<sizeof(unsigned short)\
	<<"\n sizeof(int) = "<<sizeof(int)<<", sizeof(unsigned int) = "<<sizeof(unsigned int)\
	<<"\n sizeof(long) = "<<sizeof(long)<<", sizeof(unsigned long) = "<<sizeof(unsigned long)\
	<<"\n sizeof(float) = "<<sizeof(float)<<", sizeof(double) = "<<sizeof(double)\
	<<"\n\nSizes of some pointers:"\
	<<"\n sizeof(int*) = "<<sizeof(int*)<<", sizeof(double*) = "<<sizeof(double*)\
	<<"\n sizeof(void*) = "<<sizeof(void*)<<", sizeof(enum1*) = "<<sizeof(enum1*)\
	<<"\n\nSizes of some enums:"\
	<<"\n sizeof(enum with base type short) = "<<sizeof(enum1)<<", sizeof(enum with default type) = "<<sizeof(enum2);


    //
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
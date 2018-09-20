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
#include <limits>

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program";

    std::cout<<"\nLimits on base types\n---------------------\n";
    std::cout<<"\nlowest char = "<<(int)std::numeric_limits<char>::min()<<"; largest char = "<<(int)std::numeric_limits<char>::max();
    std::cout<<"\nlowest uchar = "<<(int)std::numeric_limits<unsigned char>::min()<<"; largest uchar = "<<(int)std::numeric_limits<unsigned char>::max();
    std::cout<<"\nlowest short = "<<std::numeric_limits<short>::min()<<"; largest short = "<<std::numeric_limits<short>::max();
    std::cout<<"\nlowest ushort = "<<std::numeric_limits<unsigned short>::min()<<"; largest ushort = "<<std::numeric_limits<unsigned short>::max();
    std::cout<<"\nlowest int = "<<std::numeric_limits<int>::min()<<"; largest int = "<<std::numeric_limits<int>::max();
    std::cout<<"\nlowest uint = "<<std::numeric_limits<unsigned int>::min()<<"; largest uint = "<<std::numeric_limits<unsigned int>::max();
    std::cout<<"\nlowest long = "<<std::numeric_limits<long>::min()<<"; largest long = "<<std::numeric_limits<long>::max();
    std::cout<<"\nlowest ulong = "<<std::numeric_limits<unsigned long>::min()<<"; largest ulong = "<<std::numeric_limits<unsigned long>::max();
    std::cout<<"\nlowest float = "<<std::numeric_limits<float>::min()<<"; largest float = "<<std::numeric_limits<float>::max();
    std::cout<<"\nlowest double = "<<std::numeric_limits<double>::min()<<"; largest double = "<<std::numeric_limits<double>::max();

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
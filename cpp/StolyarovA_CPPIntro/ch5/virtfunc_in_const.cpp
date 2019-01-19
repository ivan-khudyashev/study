/*
cpp-file pattern for c++ study

Copyright (C) 2018-2019,  Khudyashev Ivan
GNU GPL https://www.gnu.org/licenses/gpl-3.0.ru.html

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#include "virtfunc_in_const.hpp"

class A
{
    int a;
    public:
        A(): a(0) {}
        A(int a) 
        { 
            this->a = a;
            std::cout << "A:A(), f() = " <<  f() << std::endl;
        }
        virtual int f() 
        { 
            std::cout << "A::f()" << std::endl;
            return a;
        }
};

class B: A
{
    int b;
    public:
        B(): A(10), b(11) {}
        B(int b): A(2) 
        { 
            this->b = b;
            std::cout << "B:B(), f() = " <<  f() << std::endl;
        }
        virtual int f() 
        { 
            std::cout << "B::f()" << std::endl;
            return b;
        }
};

int main()
{
    // Init vars
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Test 1. Create object type A with value 5:" << std::endl;
    A a(5);
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Test 2. Create object type B with value 50:" << std::endl;
    B b(50);
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "Test 3. Create link type A on type B" << std::endl;
    A* b_link = (A*)&b;
    std::cout << "f() = " << b_link->f() << std::endl;

    // Program body
    std::cout << "Start program" << std::endl;

    // Finished sentences
    std::cout << "Program finished" << std::endl;
    // Close Program
    return 0;
}

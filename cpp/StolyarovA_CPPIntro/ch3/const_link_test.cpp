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
#include "const_link_test.hpp"
#include <cmath>
#include <cstdio>

class Complex
{
    double re, im;
    public:
        Complex(double re, double im) {
            this->re = re;
            this->im = im;
        }
        Complex(const Complex& src) {
            this->re = src.re;
            this->im = src.im;
        }
        // Need replace header for successfully compiling
        // double plus_modulo(const Complex& c) {
        double plus_modulo(Complex& c) {
            return c.modulo() + modulo();
        }
        double modulo() const {
            return sqrt(re*re + im*im);
        }
        Complex operator+(const Complex& c) {
            return Complex(this->re + c.re, this->im + c.im);
        }
        const char * to_str(char* str_buf, size_t size) {
            snprintf(str_buf, size, "(%.1f + i%.1f)", this->re, this->im);
            return str_buf;
        }
};

int main()
{
    // Init vars

    // Program body
    std::cout << "Start program" << std::endl;

    Complex c1(4, 7), c_p1(2, 3), c_p2(1, 1);
    char str[100];
    //std::cout << "(4+i7) + (2+i3) = " << (c1 + c_p1).to_str(str, 100) << std::endl;
    std::cout << "Test val = " << c1.plus_modulo(c_p1 + c_p2) << std::endl;

    // Finished sentences
    std::cout << "Program finished" << std::endl;
    // Close Program
    return 0;
}

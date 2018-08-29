/*
cpp-file pattern for c++ study

Copyright (C) 2018,  Khudyashev Ivan
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

constexpr int foo(const int x) {
    return 2 * x + 10;
}

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program\n";

    // Body of programm
    const int a = foo(5);
    constexpr int b = foo(6);
    int c1;
    std::cout << "Input number: ";
    std::cin >> c1;
    int c = foo(c1);
    std::cout << "a = " << a << "; b = " << b << "; c = " << c;

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

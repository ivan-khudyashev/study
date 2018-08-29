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

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program\n";

    // Body of programm
    int a, b;
    std::cout << "Input integer a = ";
    std::cin >> a;
    std::cout << "Input integer b = ";
    std::cin >> b;
    int c {a+b};
    std::cout << "a + b = " << c;

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

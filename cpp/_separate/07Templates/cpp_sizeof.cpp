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
#include "cpp_sizeof.hpp"

int mas[] = {1, 2, 3, 4, 5, 6, 7};

void testfunc(int m[array_size(mas)])
{
    for(int i = 0; i < array_size(mas); i++)
        std::cout << m[i] << ", ";
    std::cout << std::endl;
}


int main()
{
    // Init vars

    // Program body
    std::cout << "Start program" << std::endl;

    //std::cout << "Size of massiv = " << array_size(mas);
    testfunc(mas);


    // Finished sentences
    std::cout << std::endl << "Program finished" << std::endl;
    // Close Program
    return 0;
}

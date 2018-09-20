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

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program";
    char symb = '0';
    char* p_symb = &symb;
    int int_mas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    std::string s1 = "Hello", s2 = ", ", s3 = "world";
    std::string *p_mas_string[] = {&s1, &s2, &s3};
    char **p_p_symb = &p_symb;
    const int const_int = 10;
    const int *p_const_int = &const_int;
    int *const const_p_int = int_mas + 1;

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
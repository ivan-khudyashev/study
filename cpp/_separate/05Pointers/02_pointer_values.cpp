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
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    int* int_mas[16] = {&a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16};
    void  *p_void;

    std::cout<<"\nRaw values of pointers\n"<<"value(char*) = "<<(long)p_symb;
    for(int i = 0; i < 16; i++)
    {
	p_void = int_mas[i];
	std::cout<<"\naddr(mas["<<i<<"]) = "<<int_mas[i]<<"; addr(void) = "<<p_void;
    }


    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
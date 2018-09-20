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

void printmas(std::string* s, int len)
{
    for(int i = 0; i< len; i++)
	std::cout<<i<<": "<<*(s+i)<<"   ";
}


int main()
{
    // Init vars
    const int szMas = 7;
    std::string mas[szMas] = {"do", "re", "mi", "fa", "sol", "lya", "si"};
    // Program body
    std::cout<<"Start program";
    printmas(mas, szMas);

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
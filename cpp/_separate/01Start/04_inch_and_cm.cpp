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
    char symb = 'X';
    double cm = 0, inch = 0, val;
    const float inch_to_cm = 2.54;
    // Program body
    std::cout<<"Start program";


    std::cout<<"\nInput value with metric: XXX{c|i}\nc - cm, i - inch\n\
For example: 11i or 55.23cm\n>";
    std::cin>>val>>symb;
//debug    std::cout<<"\n\nYou input: value = "<<val<<"  and metric = "<<symb;
    switch(symb)
    {
	case 'i':
	    inch = val; cm = val * inch_to_cm;
	    break;
	case 'c':
	    inch = val/inch_to_cm; cm = val;
	    break;
	default:
	    inch = cm = 0;
    }
    std::cout<<"\n inch = "<<inch<<"; cm = "<<cm;

    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
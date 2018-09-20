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

int* tstf(int someval)
{
    int *val = new int;
    *val = someval<<1;
//    int val = someval<<1; // error
    return val;
}
int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program";
    int *intval = tstf(5);
    std::cout<<"\nintval = "<<*intval;
/*
    int mas[3] = {1, 2, 3}; int *pmas = new int;;
    *pmas = 10;
    mas = pmas;
    std::cout<<"\n(mas = pmas) = "<<mas[0];
*/

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
/*
cpp-file pattern for c++ study

Copyright (C) 2017,  Khudyashev Ivan
GNU GPL https://www.gnu.org/licenses/gpl-3.0.ru.html

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#include "std_lib_facilities.h"

int main()
{
    // Init vars

    // Program body
    cout<<"Start program";

    cout << "\n Please input three integer numbers (from whitespaces, ENTER in the END):";
    int a(0), b(0), c(0), temp(0);
    cin >> a >> b >> c;
    cout << "\nYou have input this numbers: " << a << ',' << b << ',' << c;
    if (a < b) {
	temp = a; a = b; b = temp;
    }
    if (b < c) {
	temp = b; b = c; c = temp;
    }
     if (a < b) {
	temp = a; a = b; b = temp;
    }
    cout << "\nSort numbers: " << a << ',' << b << ',' << c;
   // Finished sentences
    cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

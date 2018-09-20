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

    cout << "\nInput value and currency (currency: r - rubl, d - dollar, e - euro, g - griven):\n>";
    char currencyType {0};
    double currencyValue {0.0};
    double rublToDol {56.11}, rublToEuro{60.12}, rublToGriv{20.84}, 
	dolToEuro{0.93}, dolToGriv{2.69}, euroToGriv{2.88};

    cin >> currencyValue >> currencyType;

    switch(currencyType)
    {
    case 'r':
	cout << "\n" << currencyValue << " (r), " << currencyValue / rublToDol << " (d), "
	  << currencyValue / rublToEuro << " (e), " << currencyValue / rublToGriv << " (g)";
	break;
    case 'd':
	cout << "\n" << currencyValue * rublToDol  << " (r), " 
	  << currencyValue << " (d), "
	  << currencyValue / dolToEuro << " (e), " 
	  << currencyValue  * dolToGriv << " (g)";
	break;
    case 'e':
	cout << "\n" << currencyValue * rublToEuro << " (r), " 
	  << currencyValue * dolToEuro << " (d), "
	  << currencyValue << " (e), " 
	  << currencyValue * euroToGriv << " (g)";
	break;
    case 'g':
	cout << "\n" << currencyValue * rublToGriv << " (r), " 
	  << currencyValue / dolToGriv << " (d), "
	  << currencyValue / euroToGriv << " (e), " 
	  << currencyValue  << " (g)";
	break;
    default: 
	cout << "\nUnknown currency's type";
    }
    // Finished sentences
    cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

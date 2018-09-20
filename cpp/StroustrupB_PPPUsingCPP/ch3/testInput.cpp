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
	// cout << "\n Input your names (and press 'ENTER'):";
	cout << "\n Input character symbol (and press 'ENTER'):";
	// string firstName;
	char symb {0};
	cin >> symb;
	//cout << "\n Hello, " << firstName<< "!\n";
	cout << "\n you enter symb: " << symb;
	
	cout << "\n\nInput your name and age (in decimal year):";
	string name;
	double age;
	cin >> name;
	cin >> age;
	cout << "\n Hello " << name << ", your age = " << age*12 << " month";

    // Finished sentences
    cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
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
	
	cout << "\n Input string (for exit press Ctr+Z):";
	string previous = "";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "Repeated word: " << current << "\n";
		previous = current;
	}

    // Finished sentences
    cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
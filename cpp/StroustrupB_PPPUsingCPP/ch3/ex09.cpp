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
    cout<<"Start program\nInput words 'one', 'two', etc (Ctr+D for exit)\n>";

    string w0("zero"), w1("one"), w2("two"), w3("three"), w4("four"), w5("five"),
	w6("six"), w7("seven"), w8("eight"), w9("nine");
    string nextWord("");
    int num(0);
    while ( cin >> nextWord) {
	if (nextWord == w0) num = 0;
	if (nextWord == w1) num = 1;
	if (nextWord == w2) num = 2;
	if (nextWord == w3) num = 3;
	if (nextWord == w4) num = 4;
	if (nextWord == w5) num = 5;
	if (nextWord == w6) num = 6;
	if (nextWord == w7) num = 7;
	if (nextWord == w8) num = 8;
	if (nextWord == w9) num = 9;
	cout << num;
    }
    // Finished sentences
    cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

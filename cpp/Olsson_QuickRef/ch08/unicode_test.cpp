/*
cpp-file pattern for c++ study

Copyright (C) 2018-2019,  Khudyashev Ivan
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
using namespace std;

int main()
{
    // Init vars
    string s = u8"Greek letter pi: \u03C0\nMath pi: \u213C";
    string s1 = "This is a simple string, greek letter pi: \u03C0";
    char s2[] = "This is C-string, greek letter pi: \u03C0";
    // Program body
    cout << "\nStart program\n";
    cout << s << "\n";
    cout << s1 << "\n";
    cout << s2 << "\n";

    // Finished sentences
    cout << "\nProgram finished\n";
    // Close Program
    return 0;
}

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

void f(int&& r);

int main()
{
    // Init vars
    int r = 5;
    // Program body
    cout << "\nStart program\n";
    f(r*2);
    f(11 + r);
    f(2 + 0);

    // Finished sentences
    cout << "\nProgram finished\n";
    // Close Program
    return 0;
}

void f(int&& r)
{
    cout << "r = " << r << "\n";
    cout << "r + 10 = " << (r+=10) << "\n";
}

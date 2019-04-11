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

void f(int& n)
{
    cout << "Pass integer in f(): "  << n << "\n";
}
void f1(int&& n)
{
    cout << "Pass integer in f1(): "  << n << "\n";
}

int main()
{
    // Init vars

    // Program body
    cout << "\nStart program\n";
    f1(10);
    int k = 88, k1 = 99;
    f1((int)k);
    f(k1);

    // Finished sentences
    cout << "\nProgram finished\n";
    // Close Program
    return 0;
}

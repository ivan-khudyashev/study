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

int&& f1(int n);
int& f2(int n);
int* f3(int n);

int main()
{
    // Init vars
    int n = 1;
    int ret_f;
    // Program body
    cout << "\nStart program\n";
    // cout << "n = " << n << ";int&& f1(n*2) = " << f1(n*2) << "\n";
    cout << "n = " << n << ";int&& f2(n) = " << (ret_f = f2(n)) << "\n";
    //ret_f = 0;
    cout << "f2_n = 0, n = " << n << ";int&& f2(n) = " << f2(n) << "\n";


    // Finished sentences
    cout << "\nProgram finished\n";
    // Close Program
    return 0;
}

int&& f1(int n)
{
    return n + 10;
}

int& f2(int n)
{
    static int f2_n;
    if (f2_n != 0) f2_n += n;
    else f2_n = n;
    return f2_n;
}

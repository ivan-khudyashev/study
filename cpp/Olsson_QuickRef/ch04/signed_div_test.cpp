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
    int m, n, r, d;

    // Program body
    cout << "\nStart program\n";
    cout << "Calculate r,d = m (/%) n\nInput m = ";
    cin >> m;
    cout << "Input n = ";
    cin >> n;
    if (n == 0) {
        cout << "Can't divide on zero\n";
        return 1;
    }
    r = m % n;
    d = m / n;
    cout << m << " / " << n << " = (" << d << ", " << r << ")\n"; 

    // Finished sentences
    cout << "\nProgram finished\n";
    // Close Program
    return 0;
}

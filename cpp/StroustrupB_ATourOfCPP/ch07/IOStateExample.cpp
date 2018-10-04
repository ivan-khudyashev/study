/*
cpp-file pattern for c++ study

Copyright (C) 2018,  Khudyashev Ivan
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
#include <string>
#include <vector>

using namespace std;

vector<int> read_ints(istream& is);

int main()
{
    // Init vars

    // Program body
    cout<<"Start program\n";

    // Body of programm
    cout << "Start input numbers:\n";
    vector<int> v {read_ints(cin)};
    cout << "\n\nYout have inputed this numbers:";
    for(auto& vi:v)
        cout << vi << ' ';

    // Finished sentences
    cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

vector<int> read_ints(istream& is) {
    vector<int> res;
    int i;
    while(is>>i)
        res.push_back(i);
    return res;
}

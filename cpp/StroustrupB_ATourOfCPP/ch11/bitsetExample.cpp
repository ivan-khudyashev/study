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
#include <bitset>
#include <vector>

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program\n";

    // Body of programm
    std::bitset<10> v {"1001011100"};
    std::cout << "len(char) = " << sizeof(char);
    std::cout << "\nlen(bitset<10>) = " << sizeof(v) << " and bitset<> = " << v.to_string();
    std::vector<bool> v1 {"0011"};
    std::cout << "\nlen(vector<bool>) = " << sizeof(v1) << " and vector = " << v1.to_string();

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

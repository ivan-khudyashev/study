/*
cc-file pattern for c++ study

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

int getValueFromUser()
{
    std::cout << "Please, input integer number: ";
    int n;
    std::cin >> n;
    return n;
}

int doubleNumber(int a)
{
    return 2 * a;
}

int main()
{
    // Init vars

    // Program body
    std::cout << "Start program" << std::endl;
    int a = getValueFromUser();
    std::cout << "Double of number " << a << ": " << doubleNumber(a) << std::endl;

    // Finished sentences
    std::cout << "Program finished" << std::endl;
    // Close Program
    return 0;
}

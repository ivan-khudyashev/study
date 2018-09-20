/*
cpp-file pattern for c++ study

Copyright (C) 2016,  Khudyashev Ivan
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

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program";
    
    enum flag {x = 1, y = 3, z = 5};
    enum flag1 {x1 = 10, y1 = 20, z1 = 30};
    
    std::cout<<"\nsizeof(enum flag {x = 1, y = 3, z = 5}) = "<<sizeof(flag);
    std::cout<<"\nsizeof(enum flag1 {x = 10, y = 20, z = 30}) = "<<sizeof(flag1);

    std::cout<<"\n\n-------\nExperiments with cast";
    //flag f1 = 4; std::cout<<"\nflag f1 = 4: "<<f1;
    flag f2 = flag(7); std::cout<<"\nflag f2 = 7: "<<f2;
    flag f3 = flag(100); std::cout<<"\nflag f3 = 100: "<<f3;
    //flag1 f1f2 = 25; std::cout<<"\nflag f1f2 = 25: "<<f1f2;
    //flag1 f1f3 = 40; std::cout<<"\nflag f1f3 = 40: "<<f1f3;
    //
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
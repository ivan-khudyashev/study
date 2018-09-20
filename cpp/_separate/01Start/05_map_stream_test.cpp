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
#include <algorithm>
//#include <istream>
// #include <ostream>
#include <string>
#include <map>

std::map<std::string, int> histogram;
void print(const std::pair<const std::string, int>& r)
{
    std::cout<<r.first<<' '<<r.second<<'\n';
}

void record(const std::string& s)
{
    histogram[s]++;
}
int main()
{
    // Init vars
    std::basic_istream::istream_iterator<std::string> ii(std::cin);
    std::basic_istream::istream_iterator<std::string> eos;
    
    // Program body
    std::cout<<"Start program"<<"\nInput some words and press ENTER:\n>";

    std::for_each(ii, eos, record);
    std::cout<<"\nInputed values:\n\n";
    std::for_each(histogram.begin(), histogram.end(), print);
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
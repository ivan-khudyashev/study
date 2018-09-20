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

struct monthInfo
{ std::string name; int cntDay;};

int main()
{
    // Init vars
    const int cntMonthes = 12;
    std::string monthes[cntMonthes]= {"january", "february", "march", "april", "may", "june", "july", "auguest", "september", "october", "november", "december"};
    int dayMonthes[cntMonthes] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    monthInfo fullMonthInfo[cntMonthes] = {{"january", 31}, {"february", 28}};

    // Program body
    std::cout<<"Start program";

    std::cout<<"\n1.Output month from 2 according massives\n";
    for(int i = 0; i < cntMonthes; i++)
	std::cout<<monthes[i]<<" - "<<dayMonthes[i]<<"; ";

    std::cout<<"\n2.Output month from massive of structures\n";
    for(int i = 0; i < cntMonthes; i++)
	std::cout<<fullMonthInfo[i].name<<" = "<<fullMonthInfo[i].cntDay<<"| ";
    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
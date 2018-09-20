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
#include <map>

int main()
{
    // Init vars
    std::map<std::string, int> freqOfPairLetters;
    std::string inputString = "testtest";
    std::string curPairSymb;
    int strLen;
    std::map<std::string, int>::iterator it;

    // Program body
    std::cout<<"Start program";
    std::cout<<"\nInput string:";
    std::cin>>inputString;
    strLen = inputString.size() - 1;
    for(int i = 0; i < strLen; i++)
    {
	curPairSymb = inputString.substr(i, 2);
	if(freqOfPairLetters[curPairSymb] == 0)
	    freqOfPairLetters[curPairSymb] = 1;
	else
	    freqOfPairLetters[curPairSymb]++;
    }

    //Output result
    std::cout<<"\nHere is next frequences for pair letters";
    for(it = freqOfPairLetters.begin(); it != freqOfPairLetters.end(); it++)
	std::cout<<"\nmap["<< it->first<<"] = "<<it->second;
    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

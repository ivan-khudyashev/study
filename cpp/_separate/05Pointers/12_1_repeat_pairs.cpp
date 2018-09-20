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
#include <vector>

int main()
{
    // Init vars
    const int initMassiveSize = 20, incrementDelta = 10;
    std::string inputString, cur2Letter;
    int allPairsCapacity = initMassiveSize, currentSize = 0, i, j;
    std::vector<std::string> allLetterPairs(allPairsCapacity);
    std::vector<int> pairFrequency(allPairsCapacity);
    bool isFound;

    // Program body
    std::cout<<"Start program";
    std::cout<<"\nInput string:";
    std::cin>>inputString;
    // Find all distinct Letter pairs
    for(i = 0; i < inputString.size() - 1; i++)
    {
	cur2Letter = inputString.substr(i, 2);
	// define is already 2Letter has accounted
	for(isFound = false, j = 0; j < currentSize; j++)
	{
	    if(allLetterPairs[j] == cur2Letter)
	    { isFound = true; break; }
	}
	// if next 2Letter is absense
	if(isFound == false)
	{
	    allLetterPairs[currentSize] = cur2Letter;
	    currentSize++;
	    // check size
	    if(currentSize == allPairsCapacity)
	    {
		allPairsCapacity += incrementDelta;
		allLetterPairs.resize(allPairsCapacity);
	    }
	}
    }
    // Count Frequency of all finede pairs
    allLetterPairs.resize(currentSize);
    pairFrequency.resize(currentSize);
    for(i = 0; i < currentSize; i++)
    {
	pairFrequency[i] = 0;
	for(j = 0; j < inputString.size() - 1; j++)
	{
	    if(inputString[j] == allLetterPairs[i][0] && inputString[j + 1] == allLetterPairs[i][1])
		{pairFrequency[i]++; j++;}
	}
    }
    // Output result
    std::cout<<"\n\nFrequency of pair in inputString:";
    for(i = 0; i < currentSize; i++)
    {
	std::cout<<"\nfreq["<<allLetterPairs[i]<<"] = "<<pairFrequency[i];
    }


    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

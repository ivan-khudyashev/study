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
#include <algorithm>

// size of dstVector must be >= size of srcVector
// function return result size of dstVector
int getUniqueElements(std::vector<std::string>& srcVector, std::vector<std::string>& dstVector)
{
    // start
    if(srcVector.size()>dstVector.size())
	return 0;
    int iSrc, iDst, srcSize = srcVector.size(), curSizeDst = 0;
    std::string curWord;
    bool isFindCurWord = false;
    for(iSrc = 0; iSrc < srcSize; iSrc++)
    {
	curWord = srcVector[iSrc];
	isFindCurWord = false;
	for(iDst = 0; iDst < curSizeDst; iDst++)
	    if(curWord == dstVector[iDst])
		{ isFindCurWord = true; break;}
	if(isFindCurWord == false)
	{
	    dstVector[curSizeDst] = curWord;
	    curSizeDst++;
	}
    }
    return curSizeDst;
}

int main()
{
    // Init vars
    const int startWordsMassiveLength = 5, sizeIncrement = 25;
    int cntWords = 0, sizeWords = startWordsMassiveLength;
    std::string curWord;
    std::vector<std::string> words(sizeWords);
    std::vector<std::string> uniqueWords(sizeWords);
    

    // Program body
    std::cout<<"Start program";
    std::cout<<"\nInput words. Ending words: Quit";
    curWord = "init";
    while(curWord != "Quit")
    {
	std::cout<<"\nnext word:";
	std::cin>>curWord;
	words[cntWords] = curWord;
	cntWords++;
	if(cntWords == sizeWords)
	{
	    sizeWords += sizeIncrement;
	    words.resize(sizeWords);
	}
    }
    // Get unique Words
    words.resize(cntWords);
    uniqueWords.resize(cntWords);
    sizeWords = getUniqueElements(words, uniqueWords);
    uniqueWords.resize(sizeWords);

    std::cout<<"\n\nYou have inputed next words:";
    for(int i = 0; i< uniqueWords.size(); i++)
    {
	std::cout<<"\n"<<uniqueWords[i];
    }

    // Sort inputed words
    std::sort(uniqueWords.begin(), uniqueWords.end());

    std::cout<<"\n\nSorted massive of words:";
    for(int i = 0; i< uniqueWords.size(); i++)
    {
	std::cout<<"\n"<<uniqueWords[i];
    }

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

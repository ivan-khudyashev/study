/*
cpp-file pattern for c++ study

Copyright (C) 2017,  Khudyashev Ivan
GNU GPL https://www.gnu.org/licenses/gpl-3.0.ru.html

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#include "std_lib_facilities.h" 

int main()
{
    // Init vars

    // Program body
    cout<<"Start program";

    cout << "\nEnter some words:\n>";
    vector<string> disliked = {"Broccoli", "Tomato"};
    const string bleep ("BLEEP");
    vector<string> words;
    for(string nextWord; cin >> nextWord; words.push_back(nextWord));
    for(string nextWord: words) {
	bool isDisliked = false;
	for(string dislikedWord: disliked)
	    if(dislikedWord == nextWord) {
		isDisliked = true;
		break;
	    }
	if ( isDisliked == false)
	    cout << '\n' << nextWord;
	else
	    cout << '\n' << bleep;
    }
    // Finished sentences
    cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

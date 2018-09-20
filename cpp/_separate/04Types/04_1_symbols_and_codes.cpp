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

typedef unsigned char symbType;
std::string char_to_hex(symbType s)
{
    const int szOneHexDigit = 4;
    const int arabianMaxDigit = 9;
    const char arabianFirstDigit = '0', hexFirstDigit = 'a';
    int szSymbTypeInBit = sizeof(symbType)<<3,curNumHexDigit = 0, cntHexDigitInChar = szSymbTypeInBit / szOneHexDigit;
    symbType nextHexDigit = 0;
    std::string result = "0x";
    int shiftValueForGetMostLeftHexDigit = szSymbTypeInBit - szOneHexDigit;
    for(;curNumHexDigit < cntHexDigitInChar; curNumHexDigit++)
    {
	nextHexDigit = s<<(curNumHexDigit * szOneHexDigit); //remove left prefix before current digit
	nextHexDigit >>= shiftValueForGetMostLeftHexDigit; // Get only hex digit in field 'nextHexDigit'
	// define symbol of hex digit
	if(nextHexDigit <= arabianMaxDigit)
	    result += (char)((int)arabianFirstDigit + nextHexDigit);
	else
	{
	    nextHexDigit-= (arabianMaxDigit + 1);
	    result += (char)((int)hexFirstDigit + nextHexDigit);
	}
    }
    return result;
}

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program";
    std::cout<<"\nInput symbol:\n>";
    unsigned char tstsymb = 0x2a30;
    std::cin>>tstsymb;
    std::cout<<"\nHex code of symbol ("<<tstsymb<<") = "<<char_to_hex(tstsymb);
    //
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}
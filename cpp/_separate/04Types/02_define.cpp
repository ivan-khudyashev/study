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

template<class T> T abs(T);
struct Date;
int day(Date*); //
struct Date{public: int d, m, y;};
int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program";
    char ch;
    std::string s;
    int count=1;
    const double pi=3.141592535897932385;
    int error_number = 10; // extern int error_number;
    const char* name = "Njal";
    const char* season[] = { "spring", "summer", "fall", "winter"};
    
    double sqrt(double);
    //typedef complex<short> Point; // 130
    struct User { std::string FirstName, LastName; Date Bdate;};
    
    std::cout<<"\nTest sqrt function:\nsqrt(16.0) = "<<sqrt(16.0)<<"; sqrt(23) = "<<sqrt(23.0);

    //
    std::cout<<"\nProgram finished\n";
    // Close Program
    
    
    enum Beer {Carlsberg, Tuborg, Thor};
    return 0;
}
int day(Date* p) {return p->d;}

template<class T> T abs(T a) {return a < 0 ? -a: a;}
template<class T> struct complex { T re, im; };
double sqrt(double p) 
    {
	double floorPart, closeSquareValue, delta;
	if(p<=2.0)
	{
	    floorPart = 1.0;
	}
	else
	{
	    floorPart = p/2.0;
	    while(true)
	    {
		closeSquareValue = floorPart * floorPart;
		if(closeSquareValue < p)
		    break;
		floorPart -= 1.0;
	    }
	}
	delta = (p - closeSquareValue) / closeSquareValue; // p = val*val(1 + delta) => sqrt(p) = val * Taylor_series
	// first 3 summand of Taylor series for square root
	double result = floorPart * (1.0 + 0.5 * delta - 0.125 * delta * delta + 0.0625 * delta * delta * delta);
	return result;
    }
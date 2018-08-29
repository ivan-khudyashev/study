/*
cpp-file pattern for c++ study

Copyright (C) 2018,  Khudyashev Ivan
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

enum Color {red, green, blue, yellow};
enum class TrafficLight 
{ 
    green, yellow, red
};

TrafficLight& operator++(TrafficLight& t) {
    switch(t) {
    case TrafficLight::green: return t = TrafficLight::yellow;
    case TrafficLight::yellow: return t = TrafficLight::red;
    case TrafficLight::red: return t = TrafficLight::green;
    }
}

std::string tl_tostr(TrafficLight& t) {
    if(t == TrafficLight::green) return "green";
    if(t == TrafficLight::red) return "red";
    if(t == TrafficLight::yellow) return "yellow";
    return "red";
}

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program\n";

    // Body of programm
    std::cout << "Red color = " << red;
    TrafficLight x = TrafficLight::red;
    std::cout << "\nTrafficLight now " << tl_tostr(++x);

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

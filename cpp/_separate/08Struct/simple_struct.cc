/*
cc-file pattern for c++ study

Copyright (C) 2018-2019,  Khudyashev Ivan
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
#include "simple_struct.hh"

void Person::print()
{
    std::cout << "Person <" << this->last_name << " " << this->first_name;
    if(this->middle_name.size() > 0) {
        std::cout << " " << this->middle_name;
    }
    std::cout << ">" << std::endl;
}

int main()
{
    // Init vars

    // Program body
    std::cout << "Start program" << std::endl;

    // Person p = {"Khudyashev", "Ivan", "Ivanovich"};
    Person p = { .middle_name = u8"Иванович", .first_name = u8"Иван", .last_name = u8"Худяшов" };
    p.print();
    // const auto [lname, fname, mname] = p; // aggregate initializer after C++20
    // Finished sentences
    std::cout << "Program finished" << std::endl;
    // Close Program
    return 0;
}

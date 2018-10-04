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
#include <algorithm>
#include <utility>
#include <vector>

class Record {
    private:
    std::string _name;
    std::string _num;
    public:
    Record(): _name {""}, _num {"none"} {}
    Record(std::string name, std::string num) {
        this->_name = name;
        this->_num = num;
    }
    std::string to_string() {
        return  "{name=[" + this->_name + "], num=[" + this->_num + "]}";
    }
    std::string name() const { return this->_name; }
    ~Record() {}
};

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program\n";

    // Body of programm
    auto comp = [](const Record& r1, const Record& r2) { return r1.name() == r2.name(); };
    std::vector<Record> v {Record{"C", "00"}, Record{"A", "11"}, Record{"AB", "22"}, Record{"B", "33"} };

    auto er = equal_range(v.begin(), v.end(), Record {"A", "555"}, comp);
    for(auto p = er.first; p!=er.second; ++p)
        std::cout << p->to_string() << "\n";

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

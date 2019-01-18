/*
cpp-file pattern for c++ study

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

struct s1 { int a, b; };

class Pointer_s1 {
    s1* p;
    public:
        Pointer_s1(s1* ptr = 0) { p = ptr; }
        ~Pointer_s1() { if(p) delete p; std::cout << "Successfully destruct s1" << std::endl;}
        s1* operator=(s1* ptr) {
            if(p) delete p;
            p = ptr;
            return p;
        }
        Pointer_s1(const Pointer_s1& p_s1) {
            this->p = 0;
            if(p_s1.p) {
                this->p = new s1(*(p_s1.p));
            }
            std::cout << "Copy smart-pointers complete, src_addr = " << p_s1.p << " dst_addr = " << this->p << std::endl;
        }
    private:
//        Pointer_s1(const Pointer_s1&) {}
        void operator=(const Pointer_s1&) {}
    public:
        s1& operator*() {return *p; }
        s1* operator->() {return p; }
};
int main()
{
    // Init vars

    // Program body
    std::cout << "Start program" << std::endl;
    Pointer_s1 p = new s1;
    p->a = 25;
    Pointer_s1 p_new(p);
    p_new->a = 100;
    std::cout << "in Pointer_s1 p{s1.a} =  " << (*p).a << std::endl;

    // Finished sentences
    std::cout << "Program finished" << std::endl;
    // Close Program
    return 0;
}

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

class A {
    public:
    virtual void show() = 0;
    virtual void act() = 0;
    virtual ~A() {
        std::cout << "Call destructor A\n";
    }
};

class B: public A {
    public:
    B() {}
    void show() override {
        std::cout << "This is B-object\n";
    }
    void act() override {
        std::cout << "B make some action\n";
    }
    ~B() override {
        std::cout << "Call destructor B\n";
    }
};

class C: public B {
    private:
    int val;
    public:
        C(int val): val {val} {}
    void show() override {
        std::cout << "This is C-object\n";
    }

    void act() override {
        std::cout << "C make some action with value " << this->val << "\n";
    }
    ~C() override {
        std::cout << "Call destructor C\n";
    }
};

int main()
{
    // Init vars

    // Program body
    std::cout<<"Start program\n";

    // Body of programm
    std::cout << "Test Set 1\n"; 
    A* a = new B();
    a->show();
    delete a;

    std::cout << "\nTest Set 2\n";
    B b;
    b.show();
    C c {111};
    c.show();

    std::cout << "\nTest Set 3\n";
    B *bp;
    bp = &b;
    bp -> act();
    bp = &c;
    bp -> act();

    // Finished sentences
    std::cout<<"\nProgram finished\n";
    // Close Program
    return 0;
}

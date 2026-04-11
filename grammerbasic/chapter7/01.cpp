#include <iostream>
#include <ostream>

using namespace std;

const int N = 100010;

class Person {

    private:
        int age, height;
        double money;
        string books[100];

    public:
        string name;

        void say() {
            cout << "I'm " << name << endl;
        }
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }
        void add_money(double x) {
            money += x;
        }

} person_a, person_b, person[100];

int main() {
    Person c;
    c.name = "geekboys";
    //c.age = 12;
    c.set_age(18);
    c.add_money(100);

    c.say();
    cout << c.get_age() << endl;
        
    return 0;
}

#include "eecs230.h"

//function declarations
void pointer_fun(int, int);
short greater_val(shared_ptr<short>, shared_ptr<short>);

int main()
{
    cout << "main()" << endl;
    pointer_fun(3,6);

    std::shared_ptr<short> pa(new short(3));
    std::shared_ptr<short> pb(new short(9));
    short val = greater_val(pa, pb);
    std::cout << "Greater_val test: " << val  << endl;


}

void pointer_fun(int a, int b)
{
    std::shared_ptr<int> pa = std::make_shared<int>(a);
    std::shared_ptr<int> pb = std::make_shared<int>(b);
    std::cout << *pa << " " << *pb << endl;
}

short greater_val(shared_ptr<short> a, shared_ptr<short> b)
{
    return *a > *b? *a : *b;

}
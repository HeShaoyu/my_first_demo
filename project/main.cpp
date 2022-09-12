#include <solider.h>
#include <iostream>
void test()
{
    Solider sanduo("xusanduo");
    sanduo.add_gun(new Gun("AK47"));
    sanduo.add_bullet_to_gun(10);
    sanduo.fire();
}

int main()
{
    std::cout << "This is a test string.. " << std::endl;
    test();
    return 0;
}

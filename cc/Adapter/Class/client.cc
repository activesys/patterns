#include "duck.h"
#include "turkey.h"
#include "adapter.h"

static void test_duck(Duck* duck)
{
    duck->quack();
    duck->fly();
}

int main(int argc, char* argv[])
{
    MallardDuck duck;
    Turkey turkey;
    TurkeyAdapter adapter;

    std::cout << "The Turkey says..." << std::endl;
    turkey.gobble();
    turkey.fly_short();

    std::cout << std::endl << "The Duck says..." << std::endl;
    test_duck(&duck);

    std::cout << std::endl << "The TurkeyAdapter says..." << std::endl;
    test_duck(&adapter);

    return 0;
}


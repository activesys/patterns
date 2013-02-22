#include "beverage.h"

int main(int argc, char* argv[])
{
    Tea tea;
    Coffee coffee;

    std::cout << "Making tea..." << std::endl;
    tea.prepareRecipe();

    std::cout << "Making coffee..." << std::endl;
    coffee.prepareRecipe();

    return 0;
}


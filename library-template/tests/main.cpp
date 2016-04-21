#include <iostream>

#include <c2ba/TEMPLATE/info.hpp>

namespace c2ba
{
namespace TEMPLATE
{

int main(int argc, char* argv[])
{
    std::cout << "TODO: run tests for " << LIBRARY_NAME << " version " << VERSION_MAJOR << "." << VERSION_MINOR << std::endl;
    return 0;
}

}
}

int main(int argc, char* argv[])
{
    return c2ba::TEMPLATE::main(argc, argv);
}
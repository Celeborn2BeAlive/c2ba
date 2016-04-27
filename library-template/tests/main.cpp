#include <iostream>

#include <c2ba/TEMPLATE/info.hpp>
#include <c2ba/TEMPLATE/filesystem.hpp>

namespace c2ba
{
namespace TEMPLATE
{

int main(int argc, char* argv[])
{
    std::cout << "TODO: run tests for " << library_name() << " version " << version_string() << std::endl;

    path appPath{ argv[0] };
    std::cout << "appPath = " << appPath << std::endl;

    auto dirPath = appPath.parent_path();
    std::cout << "dirPath = " << dirPath << std::endl;

    for (auto entry : directory_content(dirPath)) {
        std::cout << entry << std::endl;
    }

    return 0;
}

}
}

int main(int argc, char* argv[])
{
    return c2ba::filesystem::main(argc, argv);
}
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

static void throwError(std::string message)
{
    std::cout << message << std::endl;
    exit(EXIT_FAILURE);
}

static void stringReplace(std::string &line,
    std::string s1, std::string s2)
{
    size_t index;

    while (line.find(s1) != std::string::npos)
    {
        index = line.find(s1);
        line.erase(index, s1.length());
        line.insert(index, s2);
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
        throwError("Number of args isn't valid");
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream ifs(filename.c_str());
    if (!ifs.good())
        throwError("File doesn't exist");
    std::ofstream ofs((filename + ".replace").c_str());
    if (!ofs.good())
        throwError("File didn't created");
    std::string line;
    std::string result;
    while (std::getline(ifs, line))
    {
        stringReplace(line, s1, s2);
        result += (line + "\n");
    }
    if (!result.empty())
    {
        result.erase(result.length() - 1, 1);
        ofs << result;
    }
    ifs.close();
    ofs.close();
    return 0;
}
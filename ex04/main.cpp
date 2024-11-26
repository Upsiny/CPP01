#include <iostream>
#include <string>
#include <fstream>

void my_replace(std::string &line, const std::string s1, const std::string s2) {
    if (s1.length() == 0 || line.length() == 0 )
        return ;
    size_t  pos = line.find(s1);
    while (pos != std::string::npos)
    {
        line.erase(pos, s1.length());
        if (s2.length() != 0)
            line.insert(pos, s2);
        pos = line.find(s1, pos + s2.length());
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Wrongs args, you need : " << av[0] << ", <file>, <s1>, <s2> to proceed" << std::endl;
        return 1;
    }
    const std::string   infileName = av[1];
    const std::string   outfileName = infileName + ".replace";
    const std::string   s1 = av[2];
    const std::string   s2 = av[3];
    std::string         line;
    std::ifstream       infile(infileName.c_str()); //open file readonly
    std::ofstream       outfile(outfileName.c_str()); //open file writeonly
    if (!infile.is_open() || !outfile.is_open())
    {
        std::cerr << "error with opening files" << std::endl;
        return 1;
    }
    while (!infile.eof())
    {
        std::getline(infile, line);
        my_replace(line, s1, s2);
        outfile << line << std::endl;
    }
    return 0;
}

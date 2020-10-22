#include "CSVParser.h"

int main(int argc,char** argv)
{
    CSVParse csv("test.csv", {"id", "name"});
    std::string result("");
    auto line = csv[0];
    line.print();
    result = csv[1][2];
    line = std::move(csv.GetLine({{"id","1"},{"name","xxx"}}));
    return 0;
}

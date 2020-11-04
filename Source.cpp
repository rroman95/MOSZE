#include "Monster.h"
using namespace std;



int main(int argc, char** argv)
{
    if (argc == 3)
        try
    {
        JSON json1(argv[1]);
        JSON json2(argv[2]);
        Monster monster1 = Monster::parseUnit(json1);
        Monster monster2 = Monster::parseUnit(json2);
        Monster::Battle(monster1, monster2);
        int* name = new int[2];
            delete []name;

    }
    catch (int e)
    {
        switch (e)
        {
        case MISSINGFILE:
            std::cout << "File Doesnt exist" << std::endl;
            break;
        }
    }
    else
    {
        std::cout << "Wrong arguments" << std::endl;
    }
    return 0;
}

#include "Monster.h"
using namespace std;



int main(int argc, char** argv)
{  
   //if (argc == 3)
        try
    {
        //Monster thor = Monster::parseUnit(argv[1]);
        //Monster hulk = Monster::parseUnit(argv[2]);
       Monster thor("thor", 100, 10, 2);
       Monster hulk("hulk", 100, 10, 3.5);
       Monster::Battle(thor,hulk);
    }

    catch (int e)
    {
        if (e == 404)
        {std::cout << "File Doesnt exist" << std::endl; }
    }
    if (argc < 3)
    {
        std::cout << "Wrong arguments" << std::endl;
    }
    return 0;
}
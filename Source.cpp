#include "Monster.h"
using namespace std;

void Attack(Monster& monster1, Monster& monster2)
{
    std::cout << monster2.GetName() << " -> " << monster1.GetName() << std::endl;
    monster1.SetHp(monster1.GetHp() - monster2.GetDmg());
}

void Battle(Monster& monster1, Monster& monster2)
{
    int n = 0;
    monster1.ToString();
    monster2.ToString();
    while (monster1.GetHp() > 0 && monster2.GetHp() > 0)
    {
        if ((n % 2 == 0) && monster1.GetHp() > 0)
            Attack(monster1, monster2);
        else if (monster2.GetHp() > 0)
            Attack(monster2, monster1);

        monster1.ToString();
        monster2.ToString();
        n++;
    }
    if (monster1.GetHp() == 0) { cout << monster1.GetName() << " DIED! " << monster2.GetName() << " wins." << endl; }
    else { cout << monster2.GetName() << " DIED! " << monster1.GetName() << " wins." << endl; }
}


int main(int argc, char** argv)
{
   if (argc == 3)
        try
    {
        Monster thor = Monster::parseUnit(argv[1]);
        Monster hulk = Monster::parseUnit(argv[2]);
        Battle(hulk, thor);
    }

    catch (int e)
    {
        {std::cout << "File Doesnt exist" << std::endl; }
    }
    if (argc < 3)
    {
        std::cout << "Wrong arguments more" << std::endl;
    }
    return 0;
}
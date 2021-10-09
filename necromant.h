#ifndef NECROMANT_H
#define NECROMANT_H
#include <QString>
#include <string>
#include <vector>
#include "monstr.h"

using namespace std;

class Necromant
{
private:
    string _name;
    int _health=0;
    int _mana=0;
public:
    vector<monstr> assist;
    Necromant(string name,int health,int mana);
    Necromant(const Necromant &n);
    const int get_health();
    const int get_mana();
    void set_health(int health);
    void set_mana(int mana);
    void Necromant_stat();
    void Magic(monstr &l);
    void Buff();
    void attack(monstr &l);
    ~Necromant();
};

#endif // NECROMANT_H

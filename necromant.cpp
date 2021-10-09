#include "necromant.h"
#include "iostream"

using namespace std;


Necromant::Necromant(const Necromant &n)
{
    _name=n._name;
    _health=n._health;
    _mana=n._mana;
}

Necromant::Necromant(string name, int health, int mana)
{
    this->_name=name;
    this->set_mana(mana);
    this->set_health(health);
}

const int Necromant::get_health()
{
    return this->_health;
}

const int Necromant::get_mana()
{
    return this->_mana;
}

void Necromant::set_health(int health)
{
    this->_health+=health;
}

void Necromant::set_mana(int mana)
{
    this->_mana+=mana;
}

void Necromant::Necromant_stat()
{
    cout<<_name<<' '<<_health<<' '<<_mana<<endl;
}

void Necromant::Magic(monstr &l)
{
    if(this->get_mana()>l.get_atk()){
        assist.push_back(l);
        l.~monstr();
        cout<<"magic complete"<<endl;
    } else {
        this->set_health(-l.get_atk());
        cout<<"you get "<<l.get_atk()<<" damage"<<endl;
        if (this->_health<1) {
            cout<<"you die"<<endl;
            exit;
        }
    }
}

void Necromant::Buff()
{
    this->set_health((assist[assist.size()-1].get_health()));
    this->set_mana((assist[assist.size()-1].get_atk()));
    cout<<"you become powerfull"<<endl;

}

void Necromant::attack(monstr &l)
{
    int maxatk=0;
    for(int i=0;i<assist.size();i++){
        if(maxatk<assist[i].get_atk()) maxatk=assist[i].get_atk();
    }
    if (l.get_health()<maxatk){
        cout<<"monster "<<l.get_name()<<" get "<<maxatk<<" damage"<<endl;
        cout<<"you kill monster"<<endl;
        l.~monstr();
    } else {
    l.set_health(-maxatk);
    cout<<"monster "<<l.get_name()<<" get "<<maxatk<<" damage"<<endl;
    }
}

Necromant::~Necromant()
{

}



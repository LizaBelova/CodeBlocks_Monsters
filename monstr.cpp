#include "monstr.h"
#include "iostream"

using namespace std;



monstr::monstr()
{
    count_monstrs++;
    _name="";
    _health=0;
    _atk=0;
}

monstr::monstr(const monstr &m)
{
     count_monstrs++;
    _name=m._name;
    _health=m._health;
    _atk=m._atk;
}

monstr::monstr(string name, int health, int atk)
{
    count_monstrs++;
    this->_name=name;
    this->set_atk(atk);
    this->set_health(health);
}

const int monstr::get_health()
{
    return this->_health;
}

const int monstr::get_atk()
{
    return this->_atk;
}

string monstr::get_name()
{
    return this->_name;
}


void monstr::set_health(int health)
{
    this->_health+=health;
}

void monstr::set_atk(int atk)
{
    this->_atk+=atk;
}

void monstr::monstr_stat()
{
    if (_health>0)
    cout<<_name<<' '<<_health<<' '<<_atk<<endl;
    else cout<<"monster killed or not exist"<<endl;
}

const int monstr::get_count()
{
    return count_monstrs;
}

monstr monstr::megazorg(monstr &m1, monstr &m2)
{

    monstr mega(m1);
    mega._health+=m2._health;
    mega._atk+=m2._atk;
    mega._name="megazord";
    return mega;
}

monstr::~monstr()
{
    count_monstrs--;
    _health=0;
    _atk=0;
   // cout<<_name<<" dead"<<endl;
}

int monstr::count_monstrs=0;

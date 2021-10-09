#include <QCoreApplication>
#include <Qstring>
#include <string>
#include "monstr.h"
#include "necromant.h"
#include "iostream"


using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    monstr* Vasya=new monstr("roga",10,10);
    monstr* Petya=new monstr("ogr",60,20);
    monstr Boris;
    Boris=monstr::megazorg(*Vasya,*Petya);
    Boris.monstr_stat();
    delete Vasya;
    delete Petya;

    Necromant Misha("necr",50,50);
    monstr Troll("troll",50,50);
    monstr Troll2("troll2",30,30);

    Misha.Magic(Troll2);
    Misha.Buff();
    Troll2.~monstr();
    Misha.Magic(Troll);

    Misha.attack(Boris);
    Boris.monstr_stat();
    Misha.Necromant_stat();
    cout<<"count monsters "<<monstr::get_count()<<endl;



    return a.exec();
}


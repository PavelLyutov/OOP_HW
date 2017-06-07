#include <iostream>
#include "Soldiar.h"

#include "SoldiarsType.h"

using namespace std;

int main()

{
//enum class ArcherType{Elf , Dwarf , Gnome};

        Soldiar A("Pesho",12,12);
        A.PrintInfo();
        Archer B("Misho",12,12,ArcherType::Elf);
        B.PrintInfo();
       // Morgul C("Asen",12,12,MorgulType::Atacker);
        //C.PrintInfo();


        // za po lesno shte vuvejdame na vsichki ataka i zashtita 12 , a samite setari spored classa i tipa na geroq shte q opredelqt
        // a horata za da sa vinagi s ravna atacka i zashtita shte gi vzemem s 11 , a djudjetata po sushtata logika shte sa s atacka i zashtita 10




    return 0;
}

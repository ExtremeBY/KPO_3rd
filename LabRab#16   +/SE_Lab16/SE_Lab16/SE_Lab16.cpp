#include "FST.h"

void check_fst(const char* input, int states_count) {
    FST::FST fst(
        input,
        states_count,
        FST::NODE(1, FST::RELATION('r', 1)),

        FST::NODE(2, FST::RELATION('_', 1), FST::RELATION('b', 2)),

        FST::NODE(2, FST::RELATION('_', 2), FST::RELATION('_', 3)),

        FST::NODE(2, FST::RELATION('c', 4), FST::RELATION('p', 4)),

        FST::NODE(1, FST::RELATION(';', 5)),

        FST::NODE(3, FST::RELATION('b', 2), FST::RELATION('_', 6), FST::RELATION('e', 7)),

        FST::NODE(2, FST::RELATION('_', 6), FST::RELATION('e', 7)),

        FST::NODE(1, FST::RELATION(';', 8)),

        FST::NODE()
    );

    if (FST::execute(fst))
    {
        vi fst.string; vi " правильно"; nl
    }
    else
    {
        vi fst.string; vi " не правильно"; nl
    }
}

int _tmain(int argc, _TCHAR* argv[]) {
    SCOCP1251
    SCCP1251

    const char* inputs[] = {
        "r___b__c;e;",
        "r__b____p;e;",
        "r__b_c;__e;",
        "r_b__c;b__c;e;",
        "r_b___p;b____p;e;",
        "r______b__c;_____e;",
        "r_b____c;b_p;e;",
        "r______b__cp;_____e;",
        "r______b__c;_____e",

    };

    int states_count = 9;

    for (const char* input : inputs) {
        check_fst(input, states_count);
    }

    pause 
    ret 0;
}

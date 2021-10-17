#include <iostream>
#include <string>
// #include <array>    
#include "logic-gates.h"

using namespace std;

void drawresults(bool (*func) (bool, bool)) {
    printf("+-i1-+-i2-+-o-+\n");
    printf("| 0  | 0  | %i |\n", func(0, 0));
    printf("+----+----+---+\n");
    printf("| 0  | 1  | %i |\n", func(0, 1));
    printf("+----+----+---+\n");
    printf("| 1  | 0  | %i |\n", func(1, 0));
    printf("+----+----+---+\n");
    printf("| 1  | 1  | %i |\n", func(1, 1));
    printf("+----+----+---+\n");
    printf("\n");
}

int main() {
    printf("AND \n");
    drawresults(_and);

    printf("OR \n");
    drawresults(_or);

    printf("XOR \n");
    drawresults(_xor);

    printf("NAND \n");
    drawresults(_nand);

    printf("NOR \n");
    drawresults(_nor);

    printf("XNOR \n");
    drawresults(_xnor);

    // !
    // array<string, 6> funcs = {"_and", "_or", "_xor", "_nand", "_nor", "_xnor"};

    // for (string i : funcs) {
    //     drawresults(i);
    // }

    // for (size_t i = 0; i < funcs.size(); i++) {
    //     string actual_func = funcs.at(i);
    //     drawresults(actual_func);
    // }
    // !
    return 0;
}

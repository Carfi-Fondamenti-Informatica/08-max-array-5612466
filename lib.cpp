
#include "lib.h"

float max(float numero[], int a) {

    float cont = numero[0];
    for (int i = 0; i < a; i++) {
        if (numero[i] > cont) {
            cont = numero[i];
        }
    }
    return cont;
}

#include <stdio.h>

int main(void) {
    float PI = 3.14159265358979323846;
    int i=1;
    while (i<20) {
        printf("valore della circonferenza e:%f\n",i*(PI*2));
        i++;
    }

    return 0;
}

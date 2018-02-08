//
// Created by lukasz on 08.02.18.
//

#include <stdio.h>
#include "woda.h"

int main() {
    int histogram[N] = {1, 2, 1, 1, 4, 2, 1, 3, 1};

    printf("Maksymalny stan zgromadzonej wody wynosi %d.\n", policzWode(histogram));
}


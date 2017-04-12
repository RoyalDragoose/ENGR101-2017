Code: #include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
    init();
    int adc_reading;
    int mean = 0;
    int overa;
    
    for(int i = 0; i <5; i++){
        sleep1(1, 0);
        adc_reading = read_analog(0);
        mean = adc_reading + mean;
        printf("%d\n", adc_reading);
}

    overa = mean / 5;\
    printf("\n");
    printf("%d\n",overa);
    sleep1(0, 500000);
    
return 0;
}

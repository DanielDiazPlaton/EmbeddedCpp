#ifndef _ESTATICO_H
#define _ESTATICO_H

#include <cstdint>

class Estatico {
    public:
        Estatico();
        void showValue(void);
        void setValue(uint16_t newValue);
    private:
        static uint16_t valueStatic;
};

#endif
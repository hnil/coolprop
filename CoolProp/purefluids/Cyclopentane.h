#ifndef CYCLOPENTANE_H
#define CYCLOPENTANE_H

class CyclopentaneClass : public Fluid {

public:
    CyclopentaneClass();
    ~CyclopentaneClass(){};
    double psat(double);
    double rhosatL(double);
    double rhosatV(double);
	//void ECSParams(double *e_k, double *sigma){// From Chichester NISTIR report 6650
	//	*e_k = 298.9; *sigma = 0.4678;};
	//double surface_tension_T(double T);
};

#endif
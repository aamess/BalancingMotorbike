#include "lpf1.h"


float makeReadingLPF1(LPF1* lpf, float data) {
	lpf->lastY = lpf->b1*lpf->lastU + lpf->a1*lpf->lastY;
	lpf->lastU = data;
	return lpf->lastY;
}

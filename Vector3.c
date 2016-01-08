#include "Vector3.h"

int createVector3(real x,real y,real z,Vector3 **pVector)
{
	Vector3 *p = (Vector3 *)malloc(sizeof(Vector3));
	if(p == NULL)
	{
		return ERROR;
	}
	p->x = x;
	p->y = y;
	p->z = z;

	*pVector = p;
	return OK;
}


void printVector3(Vector3 *pVec)
{
	printf("[%5f  ,%5f  ,%5f]\n",pVec->x,pVec->y,pVec->z);
}


void invert(Vector3 *pVec)
{
	pVec->x *=-1;
	pVec->y *=-1;
	pVec->z *=-1;
}


void freeVector3(Vector3 *pVec)
{
	if(pVec != NULL)
	{
		free(pVec);
	}
}


real magnitude(Vector3 *pVec)
{
	return sqrtf(squareMagnitude(pVec));
}


real squareMagnitude(Vector3 *pVec)
{
	return pVec->x * pVec->x + pVec->y * pVec->y +pVec->z * pVec->z;
}
	

void normalize(Vector3 *pVec)
{
	real len = magnitude(pVec);
	if(len > 0)
	{
		real lenD = 1/len;
		pVec->x  = lenD * (pVec->x);
		pVec->y  = lenD * (pVec->y);
		pVec->z  = lenD * (pVec->z);
	}//endif
}


void addVector(Vector3 *pVec,const Vector3 *pAddVec)
{
	pVec->x += pAddVec->x;
	pVec->y += pAddVec->y;
	pVec->z += pAddVec->z;
}


void subtractVector(Vector3 *pVec,const Vector3 *pSubVec)
{
	pVec->x -= pSubVec->x;
	pVec->y -= pSubVec->y;
	pVec->z -= pSubVec->z;
}


int crossMultiplyVectors(const Vector3 *pA,const Vector3 *pB,Vector3 *pResult)
{
	if(pResult == NULL)
		return ERROR;

	pResult->x = (pA->y) * (pB->z) - (pA->z) * (pB->y);
	pResult->y = (pA->z) * (pB->x) - (pA->x) * (pB->z);
	pResult->z = (pA->x) * (pB->y) - (pA->y) * (pB->x);

	return OK;
}



real dotMultiplyVectors(const Vector3 *pA,const Vector3 *pB)
{
	return (pA->x)*(pB->x) + (pA->y)*(pB->y) + (pA->z)*(pB->z);
}


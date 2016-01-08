//
//  Particle.c
//  XinPhysics
//
//  Created by  潘易  on 16/1/8.
//  Copyright (c) 2016年 xinlan. All rights reserved.
//

#include "Particle.h"

int createPartile(Particle **pParticle)
{
    
    return OK;
}

int freeParticle(Particle *pParticle)
{
    if(pParticle != NULL)
    {
        free(pParticle);
        pParticle = NULL;
    }
    return OK;
}

void updateParticle(Particle *pParticle,real delta)
{
    
}
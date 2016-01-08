//
//  Particle.h
//  XinPhysics
//
//  Created by  潘易  on 16/1/8.
//  Copyright (c) 2016年 xinlan. All rights reserved.
//

#ifndef __XinPhysics__Particle__
#define __XinPhysics__Particle__

#include "Vector3.h"
#include "common.h"

struct _Particle
{
    Vector3 position;//位置
    Vector3 velocity;//速度
    Vector3 accleration;//加速度
    real damping;//阻尼系数
    real mass;//质量
};

typedef struct _Particle Particle;

int createPartile(Particle **pParticle);

int freeParticle(Particle *pParticle);

//每一帧更新粒子
void updateParticle(Particle *pParticle,real delta);

#endif /* defined(__XinPhysics__Particle__) */

#include <Stage.h>

Stage::Stage( float floorLevel, float gravity ){
    mFloorLevel = floorLevel;
    mGravity = gravity;
}

int Stage::getFloorLevel(){
    return mFloorLevel;
}

float Stage::getGravity(){
    return mGravity;
}
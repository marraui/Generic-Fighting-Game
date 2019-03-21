#ifndef STAGE_H
#define STAGE_H

class Stage{
    private:
        int mFloorLevel;
        float mGravity;
    public:
        Stage( float floorLevel = 420, float gravity = 0.3 );
        ~Stage();

        int getFloorLevel();
        float getGravity();
};

#endif //STAGE_H
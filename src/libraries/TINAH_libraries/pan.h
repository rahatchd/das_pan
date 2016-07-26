/*
 * Pan.h - Library for actuating pans.
 */

#ifndef Pan_h
#define Pan_h

class Pan
{
public:
    Pan(void);
    void leftUp(void);
    void leftPick(void);
    void leftDrop(void);
    void rightUp(void);
    void rightPick(void);
    void rightDrop(void);
};

#endif

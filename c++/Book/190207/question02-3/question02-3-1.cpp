#include <iostream>

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2){
    Point *sumptr = new Point;
    sumptr -> xpos = (p1.xpos) + (p2.xpos);
    sumptr -> ypos = (p1.ypos) + (p2.ypos);
    return *sumptr;
}

int main(void){
    Point *p1 = new Point;
    p1 -> xpos = 1;
    p1 -> ypos = 2;

    Point *p2 = new Point;
    p2 -> xpos = 3;
    p2 -> ypos = 4;
    
    Point &sumptr = PntAdder(*p1, *p2);


    std::cout<<sumptr.xpos<<", "<<sumptr.ypos<<std::endl;

    delete p1;
    delete p2;
    delete &sumptr;

    return 0;
    }

// Point& PntAdder(const Point &p1, const Point &p2){

// }


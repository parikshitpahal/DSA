class Solution {
public:
    bool checkOverlap(int r, int xC, int yC, int x1, int y1, int x2, int y2) {
        int xc=clamp(xC, x1, x2);
        int yc=clamp(yC, y1, y2);
        int dx=xC-xc;
        int dy=yC-yc;
        int sqr=dx*dy+dy*dy;
        return (dx * dx + dy * dy) <= (r * r);
    }
};
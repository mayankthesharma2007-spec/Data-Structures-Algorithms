class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int X = max(x1,min(x2,xCenter));
        int Y = max(y1, min(y2,yCenter));
        int distX = abs(X-xCenter);
        int distY = abs(Y-yCenter);
        if(distX*distX + distY*distY <= radius*radius){
            return true;
        }
        return false;
    }
};
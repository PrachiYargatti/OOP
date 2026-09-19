class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        // Find the closest point on/inside the rectangle to the circle center
        int closestX = max(x1, min(xCenter, x2));
        int closestY = max(y1, min(yCenter, y2));
        
        // Calculate squared distance between closest point and circle center
        int dx = closestX - xCenter;
        int dy = closestY - yCenter;
        int squaredDist = dx * dx + dy * dy;
        
        // Overlap exists if squared distance <= radius^2
        return squaredDist <= radius * radius;
    }
};

class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area_rectA = (ay2 - ay1) * (ax2 - ax1);
        int area_rectB = (by2 - by1) * (bx2 - bx1);
        
        //Intersection coordinates
        
        //X coordinate
        int x1 = max(ax1, bx1);
        int x2 = min(ax2, bx2);
        int x=x2-x1;
        
        //Y coordinate
        int y1 = max(ay1, by1);
        int y2 = min(ay2, by2);
        int y=y2-y1;
        
        //overlapped area
        int overlapped_area=0;
        if (x > 0 and y > 0)
            overlapped_area = x * y;
        
        
        //Total area of the region
        int area= area_rectA + area_rectB - overlapped_area;
        
        return area;
    }
};
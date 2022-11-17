class Solution {
public:
    int areaOfRect(int x1,int y1,int x2 ,int y2){
        return abs((y2-y1)*(x2-x1));
    }
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area= areaOfRect(ax1,ay1,ax2,ay2)+areaOfRect(bx1,by1,bx2,by2);
        // sum areas and subtract common
        // coordinate of common will be ? will common wil be there
        // find intersecting or not
        if (ax2 <= bx1 || ay1 >= by2 || ax1 >= bx2 || ay2<= by1) {}
        //if it has overlap
        else{
     int a1 =min(ax2, bx2) - max(ax1, bx1);
    int a2 =min(ay2, by2) - max(ay1, by1);
    int overlap = a1 * a2;
    area-=overlap;
        }
   
        return area;
    }
};
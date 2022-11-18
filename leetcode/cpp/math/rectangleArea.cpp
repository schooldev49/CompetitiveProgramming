class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        // ax2, ay2 - upper rightcorner point of rec 1
        // ax1, ay1 - lower leftcorner point of rec1
        // bx2, by2 - upper rightcorner point of rec 2
        // bx1, by1 - lower leftcorner point of rec2

        // how to find width: difference of ax2 and ax1 
        // how to find height: difference of ay2 and ay1

        // variable declarations
        int height1 = 0;
        int width1 = 0;
        int height2 = 0;
        int width2 = 0;
        int area = 0;
        int area2 = 0;
        int overlaparea = 0;
        int totalarea = 0;
        // general calculations.
        height1 = abs(ay2-ay1);
        width1 = abs(ax2-ax1);
        height2 = abs(by2-by1);
        width2 = abs(bx2-bx1);
        area = height1 * width1;
        area2 = height2 * width2;
        // checking for overlaps :(
        int xlap = min(ax2, bx2) - max(ax1, bx1);
        int ylap = min(ay2, by2) - max(ay1, by1);
        overlaparea = (xlap > 0 && ylap > 0) ? xlap * ylap : 0;

    
        // add 2 areas together and remove overlap 
        totalarea = (area + area2) - overlaparea;
        return totalarea;
    }
};

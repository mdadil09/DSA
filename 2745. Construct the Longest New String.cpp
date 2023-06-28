class Solution {
public:
    int longestString(int x, int y, int z) {
        int mini = min(x,y);
        if(x == y) return 4*x+2*z;
        return (2*mini + 2*(mini+1) + 2 * z);
    }
};
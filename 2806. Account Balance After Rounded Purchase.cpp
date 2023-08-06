class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int x = purchaseAmount%10;
        int y = purchaseAmount/10;
        int res = 100 - 10*(y + (x >= 5));
        return res;
    }
};
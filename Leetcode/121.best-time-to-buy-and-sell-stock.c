/*
给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。

你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。

返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。

 

示例 1：

输入：[7,1,5,3,6,4]
输出：5
解释：在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。
     注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格；同时，你不能在买入前卖出股票。
示例 2：

输入：prices = [7,6,4,3,1]
输出：0
解释：在这种情况下, 没有交易完成, 所以最大利润为 0。
*/

/*
 * LeetCode 121. Best Time to Buy and Sell Stock
 * 解法：一次遍历，维护最小买入价和最大利润。
 *       遍历每一天，若当天股价低于min_price则更新min_price（更好的买入时机）；
 *       否则计算当天卖出利润（当天价 - min_price），更新max_profit。
 * 时间复杂度：O(n)，空间复杂度：O(1)
 */
//思路:看到题后是找最大利润,然后想到股票有好多个低高峰区间,最大利润是就是把每个区间里面能获得利润的天的利润算出来,再比个大小,所以要先找每个区间的最低峰
 int maxProfit(int* prices, int pricesSize) {
    if (prices == NULL || pricesSize <= 0) {    //拿到题先写防御代码
        return 0;
    }
    
    int min_price = prices[0];   //定义最低峰的变量
    int max_profit = 0;          //定义最大利润
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min_price) {            //寻找当前区间最低峰或者向后面的区间找找有没有更低峰
            min_price = prices[i];
        } else {
            int today_profit = prices[i] - min_price;       //如果下一个不是最低峰就开始计算每日利润并实时更新最大收益
            if (today_profit > max_profit) {
                max_profit = today_profit;
            }
        }
    }
    
    return max_profit;
}
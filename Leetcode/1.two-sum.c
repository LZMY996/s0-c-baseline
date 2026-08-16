/*
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。

你可以按任意顺序返回答案。
示例 1：

输入：nums = [2,7,11,15], target = 9
输出：[0,1]
解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
示例 2：

输入：nums = [3,2,4], target = 6
输出：[1,2]
示例 3：

输入：nums = [3,3], target = 6
输出：[0,1]
*/ 

 
 int* twoSum(int* nums, int numsSize, int target, int* returnSize) {    /*int*规定了地址在内存中指向的一个int地址的指针,numsSize是输入数组的长度,target是目标值,returnSize是返回接收长度*/
    int i,j;
    int* result = (int*)malloc(2 * sizeof(int));    /*malloc是申请内存地址的函数返回一个地址,2 * sizeof(int)表示申请两个int地址,(int*)表示将返回的地址转换成int指针*/
    for (i = 0; i < numsSize - 1; i++){             /*初始值必须以0开始,不然会漏数组中的元素*/
        for (j = i + 1; j < numsSize; j++){
            if (target == nums[i] + nums[j]){       /*比较用 ==而不是=*/
                result[0] = i;                      /*给result赋值*/
                result[1] = j;
                *returnSize = 2;                    /*告诉平台应该读两个值,该语句需写在return前*/
                return result;
            }
        }
    }
    return 0;
}
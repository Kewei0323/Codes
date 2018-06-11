/*
[LeetCode] Contains Duplicate 

Given an array of integers, find if the array contains any duplicates. 
Your function should return true if any value appears at least twice in the array, 
and it should return false if every element is distinct.
*/

/*
std::map对应的数据结构是红黑树。红黑树是一种近似于平衡的二叉查找树，里面的数据是有序的。
在红黑树上做查找、插入、删除操作的时间复杂度为O(logN)。
而std::unordered_map对应哈希表，哈希表的特点就是查找效率高，时间复杂度为常数级别O(1)，而额外空间复杂度则要高出许多。
所以对于需要高效率查询的情况，使用std::unordered_map容器，但是std::unordered_map对于迭代器遍历效率并不高。
而如果对内存大小比较敏感或者数据存储要求有序的话，则可以用std::map容器。
*/

// 哈希表解法
class Solution{
public:
	bool containsDuplicate(vector<int>& nums){
		unordered_map<int, int> m;
		for (int i = 0; i < num.size(); ++i){
			if (m.find(nums[i]) != m.end()) return true;
			++m[nums[i]];
		}
		return false;
	}
};


// 集合解法

/*
思路:(利用集合)
用一个集合记录之前遇到过的数字，如果新的数字已经在集合中出现过了，则说明有重复。
代码
*/

public class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> set = new HashSet<Integer>();
        for(int i = 0; i < nums.length; i++){
            if(set.contains(nums[i])) return true;
            set.add(nums[i]);
        }
        return false;
    }
}


//解法三：先排序，后比较相邻数字 

//这题还有另一种解法，就是先将数组排个序，然后再比较相邻两个数字是否相等，时间复杂度取决于排序方法，代码如下：











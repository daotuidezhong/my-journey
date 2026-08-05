//#include<iostream>
//using namespace std;
//#include<vector>
//class solution {
//public:
//
//	void combine(vector<int> &nums1,int m,vector<int>&nums2,int n) {
//		//解法一:通过创建辅助数组
//		/*vector<int> nums(m + n);
//		int cur1 = 0, cur2 = 0, cur = 0;
//		while (cur1 < m && cur2 < n) {
//			if (nums1[cur1] <= nums2[cur2]) {
//				nums[cur++] = nums1[cur1++];
//			}
//			else {
//				nums[cur++] = nums2[cur2++];
//			}
//		}
//		while (cur1 < m) {
//			nums[cur++] = nums1[cur1++];
//		}
//		while (cur2 < n) {
//			nums[cur++] = nums2[cur2++];
//		}
//		for (int i = 0; i < m + n; i++) {  //不要忘记了nums是临时数组
//			nums1[i] = nums[i];
//		}*/
//
//
//		//解法二：在原数组的基础上操作（限于本题nums有留出空位）
//		int cur1 = m - 1, cur = m + n - 1, cur2 = n - 1;
//		while (cur1>=0&&cur2>=0) {  //cur2的取值需要注意，只要有一个数组执行完就不能再执行
//			if (nums1[cur1] >= nums2[cur2]) {
//				nums1[cur--] = nums1[cur1--];
//			}
//			else {
//				nums1[cur--] = nums2[cur2--];
//			}
//		}
//		while (cur2 >= 0) {
//			nums1[cur--] = nums2[cur2--];
//		}
//	}
//};
//int main() {
//
//	return 0;
//}
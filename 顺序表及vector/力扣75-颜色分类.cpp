//#include<iostream>
//#include<vector>
//using namespace std;
//class solution {
//public:
//	void sortcolor(vector<int>& nums) {
//		int left = -1, right = nums.size(), i = 0;
//		while (i < right) {
//			if (nums[i] == 2) {
//				swap(nums[i], nums[--right]);
//			}
//			else if (nums[i] == 0) {
//				swap(nums[++left], nums[i++]);
//			}
//			else {
//				i++;
//			}
//		}
//	}
//};
//int main() {
//	vector<int> nums = { 2,0,1,0,2,0,1 };
//	solution s;
//	s.sortcolor(nums);
//	for (int i = 0; i < 7; i++) {
//		cout << nums[i] << " ";
//	}
//	return 0;
//}
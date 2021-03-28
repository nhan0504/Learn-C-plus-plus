//bool oddeven(std::vector<int> arr) {
//	int odd = 0;
//	int even = 0;
//	for (std::vector<int>::size_type i = 0; i != arr.size(); i++) {
//		if (arr[i] % 2 == 0) {
//			even += 1;
//		}
//		else {
//			odd += 1;
//		}
//	}
//	if (odd > even) {
//		return true;
//	}
//	return false;
//}
//
//std::vector<int> pairs(std::pair <int, int> p) {
//	int first = get<0>(p);
//	int second = get<1>(p);
//	std::vector<int> result;
//	result.push_back(first);
//	result.push_back(second);
//	return result;
//}
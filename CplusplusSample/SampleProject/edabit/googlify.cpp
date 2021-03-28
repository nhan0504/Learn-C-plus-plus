//std::string googlify(int n) {
//	if (n <= 1) {
//		return "invalid";
//	}
//	else {
//		std::string googlify = "G";
//		std::string O(n, 'o');
//		googlify.append(O);
//		googlify.append("gle");
//	}
//	return googlify;
//}
//
//function addUp(num) {
//	int sum = 0;
//	for (int i = 1; i <= num; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//function minMax(arr) {
//	int min = 0;
//	int max = 0;
//	int size = arr.size();
//	for (int i = 0; i <= size; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//		}
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//		return min, max;
//	}
//
//	function shiftToLeft(x, y) {
//		return x * pow(2, y);
//	}
//
//	function simpleTimer(seconds) {
//		if (seconds > 10 && seconds < 60) {
//			return "00:00:" + seconds;
//		}
//		else if (seconds < 10 && seconds < 60) {
//			return "00:00:0" + seconds;
//		}
//		if (60 <= seconds && seconds < 3600) {
//			minutes = seconds / 60;
//			seconds = seconds - minutes * 60;
//			return "00:" + minutes + ":" + seconds;
//		}
//		if (seconds >= 3600) {
//			hours = seconds / 3600;
//			minutes = (seconds - hours * 3600) / 60;
//			seconds = seconds - minutes * 60;
//			return hours + ":" + minutes + ":" + seconds;
//		}
//	}
//
//	function potatoes(str) {
//		int count = 0;
//		for (string::size_type i = 0; i != str.size(); i++) {
//			if (str[i] == 'p' && str[i + 1] == 'o' && str[i + 2] == 't'
//				&& str[i + 3] == 'a' && str[i + 4] == 't' && str[i + 5] == 'o') {
//				count += 1;
//			}
//		}
//	}
//
//function canNest(arr1, arr2) {
//	int min1 = 0;
//	int max1 = 0;
//	for (string::size_type i = 0; i != arr1.size(); i++) {
//		if (arr[i] < min1) {
//			min1 = arr[i];
//		}
//		if (arr[i] > max1) {
//			max1 = arr[i];
//		}
//	}
//	int min2 = 0;
//	int max2 = 0;
//	for (string::size_type i = 0; i != arr2.size(); i++) {
//		if (arr[i] < min2) {
//			min2 = arr[i];
//		}
//		if (arr[i] > max2) {
//			max2 = arr[i];
//		}
//		if (min1 > min2 && max1 < max2) {
//			return "true";
//		}
//		return "false";
//	}
//
//int numberSyllables(std::string word) {
//	int count = 0;
//	int size = word.size();
//	for (int i = 0; i != size; i++) {
//		if (word[i] == '-') {
//			count += 1;
//		}
//		return count += 1;
//	}
//}
//
//std::string longBurp(int num) {
//	std::string R(num, 'r');
//	std::string Burp = "Bu";
//	Burp.append(R);
//	Burp.append("p");
//	return Burp;
//}
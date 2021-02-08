using namespace std;
std::string googlify(int n) {
	if (n <= 1) {
		return "invalid";
	}
	else {
		string googlify = "g";
		string O(n, 'o');
		googlify.append(O);
		googlify.append("gle");
	}
	return googlify;
}
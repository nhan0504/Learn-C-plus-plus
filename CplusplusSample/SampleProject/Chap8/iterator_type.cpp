// Sequential read-only iterator
template <class In, class X>
In find(In begin, In end, const X& x) {
	while (begin != end && *begin != x ) {
		++begin;
		return begin;
	}
}

// Sequential write-only access
template <class In, class Out>
Out copy(In begin, In end, Out dest) {
	while (begin != end) {
		*dest++ = *begin++;
	}
	return dest;
}

// Sequential read-write access
template <class For, class X>
void replace(For beg, For end, const X& x, const X& y) {
	while (beg != end) {
		if (*beg == x) {
			*beg = y;
		}
		++beg;
	}
}

// Reversible access
template <class Bi> 
void reverse(Bi begin, Bi end) {
	while (begin != end) {
		--end;
		if (begin != end) {
			swap(*begin++, *end);
		}
	}
}

// Random access
template <class Ran, class X>
bool binary_search(Ran begin, Ran end, const X& x) {
	while (begin < end) {
		Ran mid = begin + (end - begin) / 2;
		if (x < *mid) {
			end = mid;
		}
		else if (x > *mid) {
			begin = mid + 1;
		}
		else {
			return true;
		}
	}
	return false;
}
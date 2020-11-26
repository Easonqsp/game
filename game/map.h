#pragma once
using namespace std;
class map {
	public:
		const int ff = 1, bb = 9, en = 2,em=0;
		int size;
		int mat[100][100] = { 0 };
		map() {
			fill(mat[0], mat[0] + 100 * 100, em);
		}
};
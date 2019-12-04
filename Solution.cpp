#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	vector<vector<unsigned int>> x;
	vector<unsigned int> y;
	unsigned int n, q;
	cin >> n >> q;

	for (unsigned int i = 0; i < n; i++) {
		unsigned int n_elements;
		cin >> n_elements;
		vector <unsigned int> vec;
		for (unsigned int j = 0; j < n_elements; j++) {
			//vector <int> vec;
			unsigned int element;
			cin >> element;
			vec.push_back(element);
		}

		x.push_back(vec);
	}
	
	for (unsigned int i = 0; i < q; i++) {
		unsigned int q1, q2;

		cin >> q1 >> q2;

		y.push_back(x[q1][q2]);

		//cout << x[q1][q2] << endl;
	}

	for (auto i = y.begin(); i != y.end(); ++i)
		cout << *i << endl;
	


	/*
	for (unsigned int i = 0; i < q; i++) {
		vector<unsigned int> query;
		for (unsigned int j = 0; j < 2; j++) {
			unsigned int q_element;
			cin >> q_element;
			query.push_back(q_element);
		}

		y.push_back(query);

	}
	*/

	


	return 0;
}


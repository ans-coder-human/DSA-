#include<bits/stdc++.h>
using namespace std;

void window_max( vector<int>& a, int k) {
	deque<int> q;
	int n = a.size();
    for(auto k:a) cout << k <<  " ";
    cout << endl;
	//Inserting first k elements

	for (int i = 0; i < k; i++) {

		//removing elements less than a[i] from the back of the queue

		while ( (!q.empty()) && a[i] >= a[q.back()] )
			q.pop_back();

		q.push_back(i);

	}

	// inserting elements from k to end of an array
    cout << "===================\n";
	for (int i = k; i < n; i++) {

		// max element of the current window
		cout << a[q.front()] << " ";


        // removing elements out of the window from the front
		while ( (!q.empty()) && (i - q.front() >= k) )
			q.pop_front();


		// removing smaller elements
		while ( (!q.empty()) && a[i] >= a[q.back()] )
			q.pop_back();

		q.push_back(i);

	}
	cout << a[q.front()] << endl;

}

int main() {
	vector<int> a = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
	int k = 4;
	window_max(a, k);

	return 0;
}

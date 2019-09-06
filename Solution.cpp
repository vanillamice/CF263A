#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> a;
			if (a == 1) {
				cout << abs(j - 3) + abs(i - 3) << endl;
			}

		}
	}

	return 0;
}

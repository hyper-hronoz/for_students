#include "iostream"

using namespace std;

class Fuck {
	int data[10] = {0};
	public:
		int &operator[](int index) {
			return data[index];
		}
};

int main() {
	Fuck fuck;
	int val = fuck[0];
	cout << fuck[0] << endl;
}

#include <iostream>
using namespace std;

int main() {
	int money = 0;
	int coupons = 0;
	int choco = 0;
	int couponRatio = 7;
	cout << "How much you spending?" << endl;
	cin >> money;
	coupons = money;
	int addBars=0;


	int extraBars = coupons / couponRatio;
	int newCoupons = ((money - (couponRatio * extraBars)) + extraBars);
	cout << "Current amount of extra bars you can get: " << (extraBars+money) << " and " << newCoupons << " remaining." <<   endl;
	if (newCoupons >= couponRatio) {
		addBars = newCoupons / couponRatio;
		
	}
	cout << "After total calculations, total bars is: " << (extraBars + money + addBars) << " with " << newCoupons - (couponRatio*addBars) << " coupons remaining." << endl;
	
	
	return 0;


}
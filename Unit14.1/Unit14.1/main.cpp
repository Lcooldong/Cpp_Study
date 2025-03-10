#include <iostream>
using namespace std;

class Car {

private:
	int num;
	double gas;

public:
	Car();
	void setCar(int n, double g);
	void show();

};

// 파생 클래스
class RacingCar : public Car{
	
private:
	int course;
	
public:
	RacingCar();
	void setCourse(int c);

};

Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "자동차가 만들어졌습니다.\n";
}

void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "차량 번호를 " << num << " 으로, 연료량을 " << gas <<" 으로 바꾸었습니다.\n";
}

void Car::show()
{
	cout << "차량 번호는 " << num << "입니다.\n";
	cout << "연료량은 " << gas << "입니다.\n";
}

RacingCar::RacingCar()
{
	course = 0;
	cout << "레이싱 카가 만들어졌습니다.\n";
}

void RacingCar::setCourse(int c)
{
	course = c;
	cout << "코스 번호를 " << course << " 로 정했습니다.\n";
}


int main() 
{
	RacingCar rccar1;
	rccar1.setCar(1234, 30.2);
	rccar1.setCourse(5);


	return 0;
}
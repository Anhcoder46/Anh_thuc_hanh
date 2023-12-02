#include <iostream>

using namespace std;

template < class T>
class SO{
	protected:
		T a;
		T b;
	public:
		virtual void UocSoLonNhat() = 0;
		friend istream& operator >> (istream& is, SO<T> &p)
		{
			cout << " Nhap so nguyen a > 0:  ";
			is >> p.a;
			cout << " Nhap so nguyen b > 0:  ";
			is >> p.b;
			return is;
		}
};
template < class T >
class SoNguyen : public SO<T>
{
	public:
		void UocSoLonNhat()
		{
			while (this -> a != this-> b)
			{
				if ( this -> a > this -> b)
				{
				 this-> a = this -> a - this -> b;
				 }
				 else  this-> b = this -> b - this -> a;
				 }
		cout << " Uoc chung lon nhat cua 2 so nguyen la: " << this-> a;
	}
};
int main()
{
	SO<int> *pa = new SoNguyen < int > ();
	cin >> *pa;
	pa -> UocSoLonNhat();
	delete pa;
	return 0;
}

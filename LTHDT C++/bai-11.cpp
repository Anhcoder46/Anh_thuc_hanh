#include <iostream>

using namespace std;

template < class T>
class SO{
	protected:
		T n;
	public:
		virtual void TongGiaiThua() =0;
		friend istream& operator >> (istream& is, SO<T> &p)
		{
			cout << "Nhap gia tri cua n: ";
			is >> p.n;
			return is;
		}
};
template < class T>
class TinhTong : public SO<T>
{
	public:
		T gt = 1;
		T S = 0;
		void TongGiaiThua()
		{
			for (int i =1; i<= this->n; i++)
			{
				gt = gt * i;
				S = S + gt;
			}
		cout << " Tong giai thua la: " << S;
		}
};
int main()
{
	SO<int> *pa = new TinhTong <int> ();
	cin >> *pa;
	pa -> TongGiaiThua();
	delete pa;
	return 0;
}


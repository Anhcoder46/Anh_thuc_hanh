//Đề: Nhập dữ liệu (mảng tĩnh)
//-Nhập mảng từ bàn phím
//-Tạo mảng bằng cách lấy số ngẫu nhiên
//-Nhập mảng, sau khi nhập xong, mảng đã được sắp xếp tăng dần
//-Tạo mảng từ dãy số nguyên. Vd: Nhập số: 5963, tách số tạo mảng a[3,6,9,5]
#include<iostream>
#include<random>  
#include<ctime>
using namespace std;
void nhap(int a[], int n){
	cout<<"===NHAP MANG CO "<<n<<" PHAN TU==="<<endl;
	for(int i = 0; i < n; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
//Tạo mảng bằng cách lấy số ngẫu nhiên
void taoMangNgauNhien(int a[], int n){
    srand(time(nullptr));
    for(int i = 0; i < n; i++){
        a[i] = rand() % 100; 
    }
}
//sắp xếp tăng dần mảng (selection sort)
void sapXepTangDan(int a[], int n){
	for(int i = 0; i < n - 1;i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]){
				min = j;
			}
			swap(a[i], a[min]);
		}
	}
}
int main(){
	int a[10];
	int n = sizeof(a) / sizeof(a[0]);
	//nhập mảng từ bàn phím
	nhap(a, n);
	cout<<"===MANG VUA NHAP==="<<endl;
	xuat(a, n);
	//tạo mảng từ các số ngẫu nhiên
	taoMangNgauNhien(a, n);
	cout<<"===MANG SO NGAU NHIEN==="<<endl;
	xuat(a, n);
	//nhap mang, sap xep tang dan
	nhap(a, n);
	sapXepTangDan(a, n);
	cout<<"===MANG SAU KHI SAP XEP TANG DAN==="<<endl;
	xuat(a, n);
	//nhập số nguyên, chuyển số nguyên thành mảng
	int m;
	cout<<"Nhap so nguyen m: "; cin>>m;
	int tam = m;
	int dem = 0;
	while(tam > 0){
		dem++;
		tam /= 10;
	}
	int b[dem];
	for(int i = 0; i < dem; i++){
		b[i] = m % 10;
		m /= 10;
	}
	cout<<"===MANG SAU KHI TACH==="<<endl;
    cout << "b[";
    for (int i = dem - 1; i >= 0; i--) {
        cout << b[i];
        if (i > 0) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
	return 0;
}
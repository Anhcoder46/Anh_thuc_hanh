#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
//int main() {
	//dem ki tu trong chuoi
//	string s = " ";
//	getline(cin, s);
	//do dai cua s
//	int i = 0;
//	while(s[i] != '\0') {
//		i++;
//	}
//	cout << i;
//	return 0;
//}
	//dem ki tu trong chuoi
int WordCount(char str[], int length)
{
    int word = (str[0] != ' ');
    for (int i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
 
void Correct(char str[], int length)
{
    int first = 0, last = length - 1;
    // Xóa dấu trắng đầu chuỗi
    while (first < last && str[first] == ' ')
        first++;
    // Xóa dấu trắng cuối chuỗi
    while (last > first && str[last] == ' ')
        last--;
 
    // Viết hoa chữ cái đầu tiên
    if (str[first] >= 'a' && str[first] <= 'z')
        str[first] -= 32;
    for (int i = first + 1; i <= last; i++)
    {
        // Đưa hết về chữ thường
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        if (i + 1 <= last)
        {
            // Bỏ dấu trắng thừa ở giữa
            if (str[i] == str[i + 1] && str[i] == ' ')
            {
                continue;
            }
            // Nếu là chữ cái đầu mỗi từ thì viết hoa
            if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] -= 32;
            }
        }
        cout << str[i];
    }
}
 
int main()
{
    char str[100];
    // Nhập chuỗi
    cout << "Nhap chuoi: ";
    fgets(str, sizeof str, stdin);
    // Do sử dụng fgets nên chuỗi của chúng ta sẽ đọc cả ký tự '\n'.
    // Xóa bỏ nó đi.
    int length = strlen(str) - 1; 
    str[length] = '\0';
    cout << "So tu cua " << str << " la: " << WordCount(str, length);
    cout << "\nChuoi chuan hoa la: ";
    Correct(str, length);
}
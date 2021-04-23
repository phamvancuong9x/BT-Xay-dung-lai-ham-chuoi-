// 1.strlen(<chuỗi cần lấy độ dài>) : trả về độ dài của 1 chuỗi
// 2 . strcpy(<chuỗi s1>, <chuỗi s2>) : sao chép chuỗi s2 sang cho s1
// 4 . strlwr(<chuỗi cần chuyển>) :chuyển chuỗi thành chuỗi in thường
// 5. strupr(<chuỗi cần chuyển>):chuyển chuỗi thành chuỗi in hoa
//6. strrev(<chuỗi cần đảo ngược>) :đảo ngược 1 chuỗi : abcds->sdcba
//8. Thêm kí tự x tại vị trí vt (x,vt nhập từ bàn phím) vào xâu.
//9. Xóa kí tự tại vị trí vt(vt nhập từ bàn phím) trong xâu.
#include<iostream>
#include<string.h>
#define MAX 100
using namespace std;
int Strlen(char s[]);
void Strcpy(char s[], char s2[]);
void Strlwr(char s[]);
void Strupr(char s[]);
void Strrev(char s[]);
void Them(char s[], int& vt, char& x);
void xoa(char s[], int& vt);
int main() {
	char s[MAX] = "";
	char s2[MAX]="";
	int vt;
	char x;
	//cin >> s2;
	//cout << gets_s(s) << endl;
	cout << gets_s(s2) << endl;
	//cout << Strlen(s2) << endl;
	//Strcpy(s, s2);
	//Strlwr(s2);
	//Strupr(s2);
	//Strrev(s2);
	//Them(s2, vt, x);
	//s2[strlen(s2)] = '/0';
	xoa(s2, vt);
	//s2[1] = 'a';
	cout << s2<<endl;
	system("pause");
	return 0;
}
int Strlen(char s[]) {
	int length = 0;
	for (int i = 0; i < MAX; i++) {
		if (s[i] != NULL) { length++; }
		else { return length; }
	}
}
//2 . strcpy(<chuỗi s1>, <chuỗi s2>) : sao chép chuỗi s2 sang cho s1
void Strcpy(char s[], char s2[]) {
	for (int i = 0; i <= Strlen(s2); i++) {
		s[i] = s2[i];
	}
}
//4 . strlwr(<chuỗi cần chuyển>) :chuyển chuỗi thành chuỗi in thường
void Strlwr(char s[]) {
	for (int i = 0; i <= Strlen(s); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') { s[i] += 32; }
	}
}
//5 strupr(<chuỗi cần chuyển>):chuyển chuỗi thành chuỗi in hoa
void Strupr(char s[]) {
	for (int i = 0; i <= Strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') { s[i] -= 32; }
	}
}
//6. strrev(<chuỗi cần đảo ngược>):đảo ngược 1 chuỗi :  abcds -> sdcba
void Strrev(char s[]) {
	int h = strlen(s);
	if (h % 2 == 0) {
		for (int i = 0; i < h / 2; i++) {
			swap(s[i], s[h - i - 1]);
		}
	}
	else {
		for (int i = 0; i < (h-1) / 2; i++) {
			swap(s[i], s[h - i - 1]);
		}
	}
}
//8. Thêm kí tự x tại vị trí vt (x,vt nhập từ bàn phím) vào xâu.
void Them(char s[], int &vt, char &x) {
	cout << "nhap vt can them :"; cin >> vt;
	cout << "Nhap gia tri can them : "; cin >> x;
	int n = Strlen(s);
	for (int i = n; i > vt; i--) {
		s[i] = s[i - 1];
	}
	s[vt] = x;
	s[++n] = '\0';
}
//9. Xóa kí tự tại vị trí vt(vt nhập từ bàn phím) trong xâu.
void xoa(char s[], int& vt) {
	int n = strlen(s);
	cout << "nhap vt can xoa :"; cin >> vt;
	for (int i = vt; i < n-1; i++) {
		s[i] = s[i + 1];
	}
	s[--n] = '\0';
}

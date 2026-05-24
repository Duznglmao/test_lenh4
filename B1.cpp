#include <iostream>
#include <iomanip>
using namespace std;

struct Date {
    int day, month, year;
};

struct Student {
    string id, name, sex, phone, email;
    Date dob;
    double gpa;
};

void input(Student &sv) {
    cout << "=== NHAP THONG TIN SINH VIEN ===\n";

    cout << "Ma sinh vien: ";
    getline(cin, sv.id);

    cout << "Ho va ten: ";
    getline(cin, sv.name);

    cout << "Ngay sinh (dd mm yyyy): ";
    cin >> sv.dob.day >> sv.dob.month >> sv.dob.year;
    cin.ignore();

    cout << "Gioi tinh: ";
    getline(cin, sv.sex);

    cout << "GPA: ";
    cin >> sv.gpa;
    cin.ignore();

    cout << "So dien thoai: ";
    getline(cin, sv.phone);

    cout << "Email: ";
    getline(cin, sv.email);
}

void output(const Student &sv) {
    cout << "\n=== THONG TIN SINH VIEN ===\n";
    cout << "Ma sinh vien   : " << sv.id << '\n';
    cout << "Ho va ten      : " << sv.name << '\n';
    cout << "Ngay sinh      : " << sv.dob.day << "/"
         << sv.dob.month << "/" << sv.dob.year << '\n';
    cout << "Gioi tinh      : " << sv.sex << '\n';
    cout << "GPA            : " << fixed << setprecision(2) << sv.gpa << '\n';
    cout << "So dien thoai  : " << sv.phone << '\n';
    cout << "Email          : " << sv.email << '\n';
}

int main() {
    Student sv;
    input(sv);
    output(sv);
    return 0;
}

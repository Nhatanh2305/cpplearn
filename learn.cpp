#include <iostream>
#include <cstring>
#define x "who am i "
using namespace std;



int main(){
    cout<<x;
    cout<<"hello/n";
    int num;
    cout << "Nhap so luong sinh vien: ";
    cin >> num;
    float* ptr;
    
    // Cấp phát `num` ô nhớ kiểu float
    ptr = new float[num];
    cout << "Nhap diem GPA." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Sinh vien " << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    cout << "\nHien thi diem GPA cua sinh vien." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Sinh vien " << i + 1 << " :" << *(ptr + i) << endl;
    }
    // giải phóng bộ nhớ của `ptr`
    delete [] ptr;
    return 0;
}
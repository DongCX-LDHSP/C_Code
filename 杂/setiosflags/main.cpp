#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double num = 16.0000000;
    cout << 1 << " " << showpoint << num << endl;
    setprecision(6);
    cout << "Set precision!\n";
    cout << 1 << " " << setprecision(3) << showpoint << num << endl;
    cout << 1 << " " << num << endl;
    cout << 1 << " " << setprecision(5) << fixed << num << endl;
    cout << 1 << " " << "Interupt!\n";
    cout << 1 << " " << num << endl;
    cout << 1 << " " << showpoint << num << endl;
    return 0;
}

#include <iostream>
#include <string>
#include <locale>
#include <bitset>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //1    
    cout << "Name: " << "Chernov Roman Mikhailovich" << endl;
    cout << "Group: " << "221-353" << endl;
    //2    
    cout << "min int: -2147483648" << ",\t" << "max int: 2147483647" << ",\t" << "Size of int: " << sizeof(int) << endl;
    cout << "min unsigned int: 0" << ",\t" << "max unsigned int: 4294967295" << ",\t" << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "min short: -32768" << ",\t" << "max short: 32767" << ",\t" << "Size of short: " << sizeof(short) << endl;
    cout << "min unsigned short: 0" << ",\t" << "max unsigned short: 65535" << ",\t" << "Size of unsigned short: " << sizeof(unsigned short) << endl;
    cout << "min long: -2147483648" << ",\t" << "max long: 2147483647" << ",\t" << "Size of long: " << sizeof(long) << endl;
    cout << "min long long: -9223372036854775808" << ",\t" << "max long long: 9223372036854775807" << ",\t" << "Size of long long: " << sizeof(long long) << endl;
    cout << "min double: -1.7E" << ",\t" << "max double: 1.7E" << ",\t" << "Size of double: " << sizeof(double) << endl;
    cout << "min char: -128" << ",\t" << "max char: 127" << ",\t" << "Size of char: " << sizeof(char) << endl;
    cout << "min bool: false or 0" << ",\t" << "max bool: true or 1" << ",\t" << "Size of bool: " << sizeof(bool) << endl;
    //3    
    int input;
    cout << "Enter number: ";
    cin >> input;
    cout << "Binary value: " << bitset<8>(input) << endl;
    cout << "16 value: " << hex << input << endl;
    cout << "Bool: " << (bool)input << endl;
    cout << "Double: " << (double)input << endl;
    cout << "Char: " << (char)input << endl;
    //4
    cout << "Enter coefficient a * x = b: ";
    int a, b;
    cin >> a >> b;
    cout << a << " * x = " << b << endl;
    cout << "x = " << b << " / " << a << endl;
    double result = b / a;
    cout << "x = " << result << endl;
    cout << "Answer: " << result << endl;
    //5

    int x1, x2;
    double midpoint;
    cout << "Enter coordinates: ";
    cin >> x1 >> x2;
    midpoint = (x1 + x2) / 2.;
    cout << "Midpoint = " << midpoint << endl;
    return 0;
}
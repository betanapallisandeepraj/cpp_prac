#include <iostream>
using namespace std;
int main()
{
    
    cout << sizeof(bool) << "\t" << sizeof(char) << "\t" << sizeof(int) << "\t"  << sizeof(float) << "\t" << sizeof(double) << "\t" << sizeof(wchar_t) << endl;
    cout << sizeof(signed char) << "\t" << sizeof(signed int) << "\t" << sizeof(signed wchar_t) << endl;
    cout << sizeof(unsigned char) << "\t" << sizeof(unsigned int) << "\t" << sizeof(unsigned wchar_t) << endl;
    cout << sizeof(unsigned short int) << "\t" << sizeof(unsigned short wchar_t) << endl;
    cout << sizeof(unsigned long int) << "\t" << sizeof(unsigned long long int) << "\t" << sizeof(long double) << "\t" << sizeof(unsigned long wchar_t) << endl;
    return 0;
}

/*
Output:
1       1       4       4       8       4                                                                                                                                                                                                       
1       4       4                                                                                                                                                                                                                               
1       4       4                                                                                                                                                                                                                               
2       2                                                                                                                                                                                                                                       
8       8       16      8  

*/


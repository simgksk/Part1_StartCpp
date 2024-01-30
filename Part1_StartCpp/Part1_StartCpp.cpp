#include <iostream>

using namespace std;

int main()
{
#pragma region 001.Start C++

    cout << "Hello C++ World!" << endl;

    //return 0;

#pragma endregion

#pragma region 002. cout, cin, endl

    int number = 0;

    cin >> number;
    cout << "입력한 숫자는 " << number << "입니다." << endl;

    //return 0;

#pragma endregion

#pragma region 003. Variable

    int one = 1;
    int two = 2;
    int sum = one + two;

    cout << "1 + 2 = " << sum << endl;

    //return 0;

#pragma endregion

#pragma region 004. Const

    const int GREATE_VICTORY_SALSU = 612;
    const int GREATE_VICTORY_GWIJU = 1019;

    cout << "고구려 살수대첩 연도: " << GREATE_VICTORY_SALSU << "년" << endl;
    cout << "고려 귀주대첩 연도: " << GREATE_VICTORY_GWIJU << "년" << endl;

    return 0;

#pragma endregion



    
}


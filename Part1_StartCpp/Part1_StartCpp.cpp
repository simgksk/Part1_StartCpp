﻿#include <iostream>

using namespace std;

int main()
{
#pragma region 001.Start C++

    /*cout << "Hello C++ World!" << endl;

    return 0;*/

#pragma endregion

#pragma region 002. cout, cin, endl

    /*int number = 0;

    cin >> number;
    cout << "입력한 숫자는 " << number << "입니다." << endl;

    return 0;*/

#pragma endregion

#pragma region 003. Variable

    /*int one = 1;
    int two = 2;
    int sum = one + two;

    cout << "1 + 2 = " << sum << endl;

    return 0;*/

#pragma endregion

#pragma region 004. Const

    /*const int GREATE_VICTORY_SALSU = 612;
    const int GREATE_VICTORY_GWIJU = 1019;

    cout << "고구려 살수대첩 연도: " << GREATE_VICTORY_SALSU << "년" << endl;
    cout << "고려 귀주대첩 연도: " << GREATE_VICTORY_GWIJU << "년" << endl;

    return 0;*/

#pragma endregion

#pragma region 005. Four basic operations (1)

    /*int one = 1;
    int two = 2;
    int three = 3;
    int four = 4;

    cout << "1 + 3 =" << one + two << endl;
    cout << "4 - 2 =" << four - two << endl;
    cout << "2 * 3 =" << two * three << endl;
    cout << "4 / 2 =" << four / 2 << endl;

    cout << "2 + 3 * 4 = " << two + three * four << endl;
    cout << "1 + 4 / 2 = " << one + four / two << endl;

    return 0;*/

#pragma endregion

#pragma region 006. Four basic operations (2)

    //int two = 2;
    //int eight = 8;
    //int sum1 = 2;
    //int sum2 = 2;

    //sum1 = sum1 + two; //4
    //sum2 += eight; //10

    //cout << "sum1 = " << sum1 << endl;
    //cout << "sum2 = " << sum2 << endl;

    //sum1 = 2;
    //sum2 = 8;
    //sum1 += two; //4
    //sum2 /= eight; //1

    //cout << "sum1 = " << sum1 << endl;
    //cout << "sum2 = " << sum2 << endl;

    //return 0;

#pragma endregion

#pragma region 007. DataType

    /*char charater = 'C';
    int  integer = 100;
    double precision = 3.14159;
    bool is_true = true;
    string word = "Hello World";

    cout << "char: " << charater << endl;
    cout << "int: " << integer << endl;
    cout << "double: " << precision << endl;
    cout << "bool: " << is_true << endl;
    cout << "string: " << word << endl;

    return 0;*/

#pragma endregion

#pragma region 008. if ~ else

    /*int x = 10;
    int y = 1;

    if (x > y)
        cout << "x는 y보다 큽니다." << endl;
    else
        cout << "x는 y보다 작습니다." << endl;

    return 0;*/

#pragma endregion

#pragma region 009. for

    int sum1 = 0;
    int sum2 = 0;

    int one = 1;
    int two = 2;

    for (int i = 0; i < 5; i++) 
    {
        sum1 += one; //5, 1+1+1+1+1
        sum2 += two; //10 2+2+2+2+2
    }

    cout << "합산 결과: " << sum1 << "," << sum2 << endl;

    return 0; 

#pragma endregion

    
}


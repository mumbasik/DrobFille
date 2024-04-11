#include <iostream>﻿
#include <fstream>
using namespace std;
#define SIZE 4
class Drob {
    int chesl;
    int znam;
    //убрано поле summ

public:
    Drob() {

    }
    Drob(int x, int y) {
        chesl = x;
        znam = y;
    }
    void Ssumma(Drob sum) {

        cout << "First drob: ";
        cout << chesl + sum.chesl << endl;

        cout << "Second drob: ";
        cout << znam + sum.znam << endl;
    }
    void Summof2dorbs(Drob sum) {

        cout << "Summ of 2 drobs: ";
        cout << chesl * sum.znam + sum.chesl * znam << endl; //исправлено
        cout << "/: " << znam * sum.znam << endl;
    }
    void Minus(Drob minus) {

        cout << "Minus first drob: ";
        cout << chesl - minus.chesl << endl;

        cout << "Minus second drob: ";
        cout << znam - minus.znam << endl;
    }
    void MinusOf2drobs(Drob minus) {

        cout << "Minus of 2 drobs: ";
        cout << chesl * minus.znam - minus.chesl * znam << endl; //исправлено
        cout << "/: " << znam * minus.znam << endl;
    }
    void multiplication(Drob mult) {

        cout << "multiplication first drob: ";
        cout << chesl * mult.chesl << endl;
        cout << "multiplication second drob: ";
        cout << znam * mult.znam << endl;

    }

    void delen(Drob del) {
        if (del.chesl == 0) {
            cout << "Imossible if chesl = 0 " << endl;
            return;
        }
        cout << "first drob " << chesl * del.znam << endl;
        cout << "Second drob " << znam * del.chesl << endl;
    }
};
int main()
{
   /* Drob obj(9, 8);
    Drob obj2(1, 7);
    obj.Ssumma(obj2);
    obj.Summof2dorbs(obj2);
    obj.Minus(obj2);
    obj.MinusOf2drobs(obj2);
    obj.multiplication(obj2);*/
    Drob arr[SIZE] = {Drob(5, 1) , Drob(4 , 3) , Drob(9, 2), Drob( 4, 4)};
    ofstream file("binarefile.txt", ios::binary);
    for (int i = 0; i < SIZE; i++) {
        file.write((char*)arr,  sizeof(Drob));
    }
    file.close();
    Drob arr2[SIZE];
    ifstream fil("binarefile.txt", ios::binary);
    for (int i = 0; i < SIZE; i++) {
        fil.read((char*)&arr2[i], sizeof(Drob));
    }
    fil.close();
    file.close();
    //N2
    
    Drob arr3[SIZE] = { Drob(5, 1) , Drob(4 , 3) , Drob(9, 2), Drob(4, 4) };
    ofstream filee("binare.txt", ios::binary);
    for (int i = 0; i < SIZE; i++) {
        file.write((char*)arr, sizeof(Drob));
    }
    file.close();
    ifstream fi("binare.txt", ios::binary);
    fi.seekg(0, ios::end);
    fi.seekg(-2 * 16, ios::end);
    Drob drob;
    fi.read((char*)&drob, sizeof(Drob));
    fi.close();
}

    



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

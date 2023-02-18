#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Class {
public:
    Class() { }

    bool AllowedSymbol(vector<T> allowedSymbols, T symbol) {
        for (int i = 0; i < allowedSymbols.size(); i++)
            if (allowedSymbols[i] == symbol)
                return true;

        return false;
    }

    void coutArray() {
        for (int i = 0; i < Vector.size(); i++)
            cout << Vector[i];
    }

    void pushSomething(T something) {
        if (AllowedSymbol(allowedSymbols, something))
            Vector.push_back(something);
        else
            cout << "Symbol is forbidden, it will not be added to the array\n\n";
    }

protected:
    vector<T> Vector;

    vector<T> allowedSymbols = {
    '‘', '₴', '1', '2', '3', '4', '5',
    '6', '7', '8', '9', '0', '-', '=',
    '!', '”', 'N', 'o', ';', '%', ':',
    '?', '(', ')', '_', '+', '/', '*',
    '\\', ',', '.'
    };
};

int main() {
    Class<char> Symbols;

    Symbols.pushSomething('A'); // Test

    Symbols.pushSomething('1'); Symbols.pushSomething('+'); Symbols.pushSomething('8');
    Symbols.pushSomething('!'); Symbols.pushSomething('=');
    Symbols.pushSomething('1'); Symbols.pushSomething('0');

    Symbols.coutArray();

    return 0;
}

/*
Розгляньте приклад програми, яка дозволяє працювати з шаблонними класами. На основі шаблону, який там є,
створіть клас, що може містити тільки наступні символи: ‘₴1234567890-=!”No;%:?()_+/*\,.
Якщо буде спроба ввести інший символ в масив, опрацюйте це з видачею відповідного повідомлення на екран.
Спробуйте з дозволених елементів масива скласти вираз і виведіть його на екран.
*/

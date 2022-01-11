#include <bits/stdc++.h>
using namespace std;

void binaryToDecimal()
{
    int n, temp;
    int x = 1, y, ans = 0;

    cout << "Enter Binary value : ";
    cin >> n;
    temp = n;

    while (n > 0)
    {
        y = n % 10;
        ans = ans + (x * y);
        x = x * 2;
        n = n / 10;
    }
    cout << "Decimal Value of " << temp << " is " << ans << endl;
}

void octalToDecimal()
{
    int n, temp;
    int x = 1, y, ans = 0;

    cout << "Enter Octal value : ";
    cin >> n;
    temp = n;

    while (n > 0)
    {
        y = n % 10;
        ans = ans + (x * y);
        x = x * 8;
        n = n / 10;
    }
    cout << "Decimal Value of " << temp << " is " << ans << endl;
}

void hexadecimalToDecimal()
{
    string n, temp;
    int x = 1, size, ans = 0;

    cout << "Enter HexaDecimal value : ";
    cin >> n;
    temp = n;

    size = n.size();
    for (int i = size - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + (x * (n[i] - '0'));
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + (x * (n[i] - 'A' + 10));
        }
        x = x * 16;
    }

    cout << "Decimal Value of " << temp << " is " << ans << endl;
}

void decimalToBinary()
{
    int n, temp;
    int x = 1, ans = 0;

    cout << "Enter Decimal value : ";
    cin >> n;
    temp = n;

    while (x <= n)
    {
        x = x * 2;
    }
    x = x / 2;

    while (x > 0)
    {
        int lastdigit = n / x;
        n = n - lastdigit * x;
        x = x / 2;
        ans = (ans * 10) + lastdigit;
    }

    cout << "Binary Value of " << temp << " is " << ans << endl;
}

void decimalToOctal()
{
    int n, temp;
    int x = 1, ans = 0;

    cout << "Enter Decimal value : ";
    cin >> n;
    temp = n;

    while (x <= n)
    {
        x = x * 8;
    }
    x = x / 8;

    while (x > 0)
    {
        int lastdigit = n / x;
        n = n - lastdigit * x;
        x = x / 8;
        ans = (ans * 10) + lastdigit;
    }

    cout << "Octal Value of " << temp << " is " << ans << endl;
}

void decimalToHexadecimal()
{
    int n, temp;
    int x = 1;
    string ans = "";

    cout << "Enter Decimal value : ";
    cin >> n;
    temp = n;

    while (x <= n)
    {
        x = x * 16;
    }
    x = x / 16;

    while (x > 0)
    {
        int lastdigit = n / x;
        n = n - lastdigit * x;
        x = x / 16;

        if (lastdigit <= 9)
        {
            ans = ans + to_string(lastdigit);
        }
        else
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }

    cout << "HexaDecimal Value of " << temp << " is " << ans << endl;
}

int reverse(int n)
{
    int ans = 0, lastDigit;

    while (n > 0)
    {
        lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n = n / 10;
    }
    return ans;
}

void addBinary()
{
    int a, b;
    cout << "Enter two Binary value for Binary addition \n";
    cin >> a >> b;

    int tempA = a;
    int tempB = b;

    int ans = 0, prevCarry = 0;

    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a = a / 10;
        b = b / 10;
    }

    while (a > 0)
    {
        if (prevCarry == 1)
        {
            if (a % 2 == 0)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
        a = a / 10;
    }

    while (b > 0)
    {
        if (prevCarry == 1)
        {
            if (b % 2 == 0)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b = b / 10;
    }
    if (prevCarry == 1)
    {
        ans = ans * 10 + 1;
    }
    ans = reverse(ans);

    cout << "Addition of " << tempA << " + " << tempB << " = " << ans << endl;
}

int main()
{
    int choice;

    cout << " 1. Binary to Decimal conversion\n 2. Octal to Decimal conversion\n 3. Hexadecimal to Decimal conversion\n 4. Decimal to Binary conversion \n 5. Decimal to Octal conversion\n 6. Decimal to Hexadecimal conversion\n 7. Binary Addition\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        binaryToDecimal();
        break;

    case 2:
        octalToDecimal();
        break;

    case 3:
        hexadecimalToDecimal();
        break;

    case 4:
        decimalToBinary();
        break;

    case 5:
        decimalToOctal();
        break;

    case 6:
        decimalToHexadecimal();
        break;

    case 7:
        addBinary();
        break;

    default:
        cout << "Invalid choice!!!" << endl;
        break;
    }

    return 0;
}
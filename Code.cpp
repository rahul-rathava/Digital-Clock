#include<iostream>
#include<iomanip>
#include<chrono>
#include<thread>
#include<ctime>

#ifdef _WIN32

    #include <windows.h>
    void clearScreen(){system("cls");}

#else
    #include<unistd.h>
    void clearScreen(){system("clear");}

    #endif

    using namespace std;

    int main(){
        while(true){
            clearScreen();
            time_t now=time(nullptr);
            tm* local= localtime(&now);

            cout<<setfill('0')<<setw(2)<<local->tm_hour<<":"
            <<setfill('0')<<setw(2)<<local->tm_min<<":"
            <<setfill('0')<<setw(2)<<local->tm_sec<<endl;

            this_thread::sleep_for(chrono::seconds(1));

        }
        return 0;
    }

#include <stdio.h>
#include <windows.h>

int main() {
    
    int i, j;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // Obter o handle do console


    //Definindoas cores padrão do console e nomeando de "defaultAttributes"
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    WORD defaultAttributes = consoleInfo.wAttributes;

    char brazil[11][18] = {
        {'v','v','v','v','v','v','v','v','a','a','v','v','v','v','v','v','v','f'},
        {'v','v','v','v','v','v','v','a','a','a','a','v','v','v','v','v','v','f'},
        {'v','v','v','v','v','a','a','z','z','z','z','a','a','v','v','v','v','f'},
        {'v','v','v','a','a','a','b','b','z','z','z','z','a','a','a','v','v','f'},
        {'v','v','a','a','a','z','z','b','b','z','z','z','z','a','a','a','v','f'},
        {'v','a','a','a','a','z','z','z','b','b','b','b','b','a','a','a','a','f'},
        {'v','v','a','a','a','z','z','z','z','z','z','z','z','a','a','a','v','f'},
        {'v','v','v','a','a','a','z','z','z','z','z','z','a','a','a','v','v','f'},
        {'v','v','v','v','v','a','a','z','z','z','z','a','a','v','v','v','v','f'},
        {'v','v','v','v','v','v','v','a','a','a','a','v','v','v','v','v','v','f'},
        {'v','v','v','v','v','v','v','v','a','a','v','v','v','v','v','v','v','f'},
};

    for(i = 0; i < 11; i++){
        for(j = 0; j < 18; j++){
            if(brazil[i][j] == 'v'){
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_INTENSITY);
                printf(" ");
            } else if(brazil[i][j] == 'a'){
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN| BACKGROUND_RED | BACKGROUND_INTENSITY);
                printf(" ");
            } else if(brazil[i][j] == 'z'){
                SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
                printf(" ");
            } else if(brazil[i][j] == 'b'){
                SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);
                printf(" ");
            } else if(brazil[i][j] == 'f'){
                SetConsoleTextAttribute(hConsole, BACKGROUND_GREEN | BACKGROUND_INTENSITY);
                printf(" \n");
            }
        
        }
    }


    SetConsoleTextAttribute(hConsole, defaultAttributes);

    printf("Hello World! Come to Brazil!\n\n");
    return 0;
}


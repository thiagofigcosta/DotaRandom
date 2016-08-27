#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#ifdef __linux__
	#include <termios.h>
    #define stricmp strcasecmp
    #define strnicmp strncasecmp
    #define CLS "clear"
    
    int getch(void){
      int c=0;

      struct termios org_opts, new_opts;
      int res=0;
          //-----  store old settings -----------
      res=tcgetattr(STDIN_FILENO, &org_opts);
      assert(res==0);
          //---- set new terminal parms --------
      memcpy(&new_opts, &org_opts, sizeof(new_opts));
      new_opts.c_lflag &= ~(ICANON | ECHO | ECHOE | ECHOK | ECHONL | ECHOPRT | ECHOKE | ICRNL);
      tcsetattr(STDIN_FILENO, TCSANOW, &new_opts);
      c=getchar();
          //------  restore old settings ---------
      res=tcsetattr(STDIN_FILENO, TCSANOW, &org_opts);
      assert(res==0);
      return(c);
	}
#elif _WIN32
    #include <conio.h>
    #define CLS "cls"
#endif

using namespace std;

int first =1;
int getch2(void);
void hero(int pos);

int main(){
    char input[1000];
    srand(time(NULL));
    if(first){
    cout<<"Digite a posicao que deseja jogar e pegue um randonzinho.(mid,sup,hc,semi,jungle,uncommon,all)"<<endl;
    first=0;
    }
    cin.getline(input,1000);
    cout<<endl<<endl;
    system(CLS);
    cout<<"Digite a posicao que deseja jogar e pegue um randonzinho.(mid,sup,hc,semi,jungle,uncommon,all)"<<endl;
    cout<<"jogue de: ";
    if (!stricmp(input,"mid")){
        hero(0);
    }else if (!stricmp(input,"sup")||!stricmp(input,"suport")){
        hero(1);
    }else if (!stricmp(input,"hc")||!stricmp(input,"carry")){
        hero(2);
    }else if (!stricmp(input,"semi")){
        hero(3);
    }else if (!stricmp(input,"jungle")){
        hero(4); 
    }else if (!stricmp(input,"uncommon")){
        hero(5);
    }else if (!stricmp(input,"all")){
        hero(6);
    }else{
        cout<<"commando errado";
    }
    cout<<endl<<endl<<"Digite outra posicao";
    //getch();
    main();
    return 0;
}

void hero(int pos){
    switch(pos){
        default://mid
            switch(rand()%21){
                default:
                    cout<<"INVOKER gg ez <3"<<endl;
                break;
                case 1:
                    cout<<"TEMPLAR ASSASSIN"<<endl;
                break;
                case 2:
                    cout<<"ZEUS"<<endl;
                break;
                case 3:
                    cout<<"STORM SPIRIT"<<endl;
                break;
                case 4:
                    cout<<"LINA"<<endl;
                break;
                case 5:
                    cout<<"DROW"<<endl;
                break;
                case 6:
                    cout<<"QUEEN OF PAIN"<<endl;
                break;
                case 7:
                    cout<<"OUTWORLD DEVOURER"<<endl;
                break;
                case 8:
                    cout<<"DEATH PROPHET"<<endl;
                break;
                case 9:
                    cout<<"VIPER"<<endl;
                break;
                case 10:
                    cout<<"MEDUSA"<<endl;
                break;
                case 11:
                    cout<<"EMBER SPIRIT"<<endl;
                break;
                case 12:
                    cout<<"GYROCOPTER"<<endl;
                break;
                case 13:
                    cout<<"SNIPER"<<endl;
                break;
                case 14:
                    cout<<"ALCHEMIST"<<endl;
                break;
                case 15:
                    cout<<"PUDGE"<<endl;
                break;
                case 16:
                    cout<<"HUSKAR"<<endl;
                break;
                case 17:
                    cout<<"WEAVER"<<endl;
                break;
                case 18:
                    cout<<"WINDRANGER"<<endl;
                break;
                case 19:
                    cout<<"NECROPHOS"<<endl;
                break;
            }
        break;
        case 1://SUP
            switch(rand()%31){
                default:
                    cout<<"CRISTAL MAIDEN"<<endl;
                break;
                case 1:
                    cout<<"TREANT PROTECTOR"<<endl;
                break;
                case 2:
                    cout<<"MAGNUS"<<endl;
                break;
                case 3:
                    cout<<"SAND KING"<<endl;
                break;
                case 4:
                    cout<<"TIDEHUNTER"<<endl;
                break;
                case 5:
                    cout<<"UNDYING"<<endl;
                break;
                case 6:
                    cout<<"CHEN"<<endl;
                break;
                case 7:
                    cout<<"JAKIRO"<<endl;
                break;
                case 8:
                    cout<<"KEEPER OF ThE LIGHT"<<endl;
                break;
                case 9:
                    cout<<"OGRE MAGI"<<endl;
                break;
                case 10:
                    cout<<"SHADOW SHAMAN"<<endl;
                break;
                case 11:
                    cout<<"DISRUPTOR"<<endl;
                break;
                case 12:
                    cout<<"SKYWARTH MAGE"<<endl;
                break;
                case 13:
                    cout<<"TECHIES"<<endl;
                break;
                case 14:
                    cout<<"SILENCER"<<endl;
                break;
                case 15:
                    cout<<"ANCIENT APARITION"<<endl;
                break;
                case 16:
                    cout<<"BANE"<<endl;
                break;
                case 17:
                    cout<<"DAZZLE"<<endl;
                break;
                case 18:
                    cout<<"LICH"<<endl;
                break;
                case 19:
                    cout<<"LION"<<endl;
                break;
                case 20:
                    cout<<"NECROPHOS"<<endl;
                break;
                case 21:
                    cout<<"PUGNA"<<endl;
                break;
                case 22:
                    cout<<"SHADOW DEMON"<<endl;
                break;
                 case 23:
                    cout<<"VISAGE"<<endl;
                break;
                 case 24:
                    cout<<"WARLOCK"<<endl;
                break;
                 case 25:
                    cout<<"WINTER WINVERN"<<endl;
                break;
                 case 26:
                    cout<<"WITCH DOCTOR"<<endl;
                break;
                case 27:
                    cout<<"OMININIGHT"<<endl;
                break;
                 case 28:
                    cout<<"ELDER TITAN"<<endl;
                break;
                case 29:
                    cout<<"ORACLE"<<endl;
                break;
                case 30:
                    cout<<"EARTH SHAKER"<<endl;
                break;
            }
        break;
        case 2://HC
            switch(rand()%25){
                default:
                    cout<<"ANTIMAGE"<<endl;
                break;
                case 1:
                    cout<<"DRAGON KNIGHT"<<endl;
                break;
                case 2:
                    cout<<"LEGION COMMANDER"<<endl;
                break;
                case 3:
                    cout<<"SVEN"<<endl;
                break;
                case 4:
                    cout<<"TINY"<<endl;
                break;
                case 5:
                    cout<<"ABADDON"<<endl;
                break;
                case 6:
                    cout<<"AXE"<<endl;
                break;
                case 7:
                    cout<<"CHAOS KNIGHT"<<endl;
                break;
                case 8:
                    cout<<"SLARDAR"<<endl;
                break;
                case 9:
                    cout<<"SPIRIT BREAKER"<<endl;
                break;
                case 10:
                    cout<<"WRAITH KING"<<endl;
                break;
                case 11:
                    cout<<"JUGGERNAULT"<<endl;
                break;
                case 12:
                    cout<<"MORPHILING"<<endl;
                break;
                case 13:
                    cout<<"PHANTOM LANCER"<<endl;
                break;
                case 14:
                    cout<<"RIKI"<<endl;
                break;
                case 15:
                    cout<<"URSA"<<endl;
                break;
                case 16:
                    cout<<"BROODMOTHER"<<endl;
                break;
                case 17:
                    cout<<"CLINKZ"<<endl;
                break;
                case 18:
                    cout<<"FACELESS VOID"<<endl;
                break;
                case 19:
                    cout<<"PHANTOM ASSASSIN"<<endl;
                break;
                case 20:
                    cout<<"SLARK"<<endl;
                break;
                case 21:
                    cout<<"TERRORBLADE"<<endl;
                break;
                case 22:
                    cout<<"VIPER"<<endl;
                break;
                case 23:
                    cout<<"BREWMASTER"<<endl;
                break;
                case 24:
                    cout<<"SPECTRE"<<endl;
                break;
            }
        break;
        case 3://SEMI
            switch(rand()%9){
                default:
                    cout<<"MIRANA"<<endl;
                break;
                case 1:
                    cout<<"BOUNTY HUNTER"<<endl;
                break;
                case 2:
                    cout<<"VENOMANCER"<<endl;
                break;
                case 3:
                    cout<<"VENGEFUL SPIRIT"<<endl;
                break;
                case 4:
                    cout<<"VISAGE"<<endl;
                break;
                case 5:
                    cout<<"ORACLE"<<endl;
                break;
                case 6:
                    cout<<"WARLOCK"<<endl;
                break;
                case 7:
                    cout<<"CRYSTAL MAIDEN"<<endl;
                break;
                case 8:
                    cout<<"TUSK"<<endl;
                break;
            }
        break;
        case 4://JUNGLE
            switch(rand()%15){
                default:
                    cout<<"NATURES PROPHET"<<endl;
                break;
                case 1:
                    cout<<"SVEN"<<endl;
                break;
                case 2:
                    cout<<"LEGION COMMANDER"<<endl;
                break;
                case 3:
                    cout<<"NIGHT STALKER"<<endl;
                break;
                case 4:
                    cout<<"LYCAN"<<endl;
                break;
                case 5:
                    cout<<"LIFESTEALER"<<endl;
                break;
                case 6:
                    cout<<"DOOM"<<endl;
                break;
                case 7:
                    cout<<"ENIGMA"<<endl;
                break;
                case 8:
                    cout<<"ENCHANTRESS"<<endl;
                break;
                case 9:
                    cout<<"CHEN"<<endl;
                break;
                case 10:
                    cout<<"LONE DRUID"<<endl;
                break;
                case 11:
                    cout<<"BLOODSEEKER"<<endl;
                break;
                case 12:
                    cout<<"BROODMOTHER"<<endl;
                break;
                case 13:
                    cout<<"WRAITH KING"<<endl;
                break;
                case 14:
                    cout<<"JUGGERNAULT"<<endl;
                break;
                
            }
        break;
        case 5://uncommon
            switch(rand()%16){
                default:
                    cout<<"IO"<<endl;
                break;
                case 1:
                    cout<<"MEEPO"<<endl;
                break;
                case 2:
                    cout<<"KUNKKA"<<endl;
                break;
                case 3:
                    cout<<"CLOCKWERK"<<endl;
                break;
                case 4:
                    cout<<"SAND KING"<<endl;
                break;
                case 5:
                    cout<<"NAGA SIREN"<<endl;
                break;
                case 6:
                    cout<<"TROLL WARLORD"<<endl;
                break;
                case 7:
                    cout<<"RAZOR"<<endl;
                break;
                case 8:
                    cout<<"SHADOW FIEND"<<endl;
                break;
                case 9:
                    cout<<"RUBBICK"<<endl;
                break;
                case 10:
                    cout<<"DARK SEER"<<endl;
                break;
                case 11:
                    cout<<"LESHARC"<<endl;
                break;
                case 12:
                    cout<<"TINKER"<<endl;
                break;
                case 13:
                    cout<<"ARC WARDEN"<<endl;
                break;
                case 14:
                    cout<<"NYX ASSASSIN"<<endl;
                break;
                case 15:
                    cout<<"PHOENIX"<<endl;
                break;
            }
        break;
        case 6:
            hero(rand()%7);
        break;       
    }
}



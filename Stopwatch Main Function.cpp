//Digital Stopwatch//
#include<iostream>
using namespace std;
#include<unistd.h>
#include<conio.h>

int h=0,m=0,s=0;
int start()//Adding initialization
{
        system("color Ec");//added color
cout<<"\t\tSTOP WATCH"<<endl;
cout<<"\t(Click any where to start)"<<endl;
getch();
}

void stw(int h,int m,int s)
{
int x=0;

while(!kbhit()){
        
    system("cls");//Screen_Clear    

cout<<"*******************************************************"<<endl;
cout<<"\t\t   STOP WATCH"<<endl;


cout<<"__|_________________________________________________|___"<<endl;
cout<<"  |                                                 |"<<endl;
cout<<"  |                                                 |"<<endl;

cout<<"  |                "<<h<<"h:"<<m<<"m:"<<s<<"s          \t            |"<<endl;
    s++;
    if(s==60){
        s=0;

        m++;
    }
    if(m==60){
        m=0;
        h++;
    }
cout<<"  |                                                 |"<<endl;
cout<<"__|_________________________________________________|___"<<endl;
cout<<"  |                                                 |   "<<endl;
cout<<"         (Click Anywhere To Stop)"<<endl;

 //add Annimation
if(x==500){level: x=0;}
if(x<=33){
    for(int k=1;k<=x;k++){
    cout<<"-->> ";}


        x++;
        if(x==6)
            goto level;
}
   sleep(1);//ADDING Time_Delay     
}
}

int restart(){
cout<<"\n\t\twanna restart?\n\t(type y for yes & n for no):";}


int main(){       


  start();

  re:
        system("cls");
int h=0,m=0,s=0;

  stw(h,m,s);
  getch();
  res:
restart();
char w;
cin>>w;
if(w=='y')goto re;
else if(w=='n')goto fin;
else
    {
        system("cls");
cout<<"\n\twrong input;type again..\n";
}

goto res;
fin:
        system("cls");
        cout<<endl;
cout<<"\n\t\t_______________________________________________";
cout<<"\n\t\t|                                             |";
cout<<"\n\t\t|      Thanks for using our stopwatch         |";
cout<<"\n\t\t|                                             |";
cout<<"\n\t\t|_____________________________________________|";
getch();


}

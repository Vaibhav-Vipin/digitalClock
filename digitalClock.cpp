#include<time.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    time_t rawtime;
    struct tm* currentTime;
    char a[100];
    
    while(1){
    
    rawtime = time(0);
    currentTime = localtime(&rawtime);
    strftime(a,100,"%I:%M:%S",currentTime);
    
    setcolor(11);
    
    settextstyle(3,HORIZ_DIR,10);
    outtextxy(200,100,a);
    
    strftime(a,100,"%p",currentTime);
    settextstyle(2,HORIZ_DIR,2);
    outtextxy(600,8,a);
    
    strftime(a,100,"%a,%d,%b%y",currentTime);
    settextstyle(3,HORIZ_DIR,5);
    outtextxy(130,310,a);
    
    }
    
    getch();
    closegraph();
    return 0;
}

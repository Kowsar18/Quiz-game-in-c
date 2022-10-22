#include<stdio.h>
#include<conio.h>
int topic,choice;
int ans,c=5,a,totalmarks=100,totalmarks1=150;
char name[50];
int cse_question()
{
    system("cls");
    int count=0;
           printf("\n\t\t\tSelect an option and enter the ans no.\n\n");
        printf("\n\t\t\tQ-1.Who invented C Language.?");
        printf("\n\t\t\t1.Dennis Ritchie\t\t\t2.Charles Babbage\n\t\t\t3.Grahambel\t\t\t4.Steve Jobs\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-2.C is a which level language.?");
        printf("\n\t\t\t1.Low Level\t\t\t2.Low + High\n\t\t\t3.High Level\t\t\t4.None\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-3.The brain of any computer system is");
        printf("\n\t\t\t1.CPU\t\t\t2.ALU\n\t\t\t3.MOUSE\t\t\t4.NONE\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-4.A computer network which is used within a building is called a:");
        printf("\n\t\t\t1.WAN\t\t\t2.MAN\n\t\t\t3.LAN\t\t\t4.PAN\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-5.What is the name of web page address?");
        printf("\n\t\t\t1.Directory\t\t\t2.URL\n\t\t\t3.Protocol\t\t\t4.Domain\n");
        scanf("%d",&a);
        if(a==2)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 2.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-6.Which of the following represents billion characters?");
        printf("\n\t\t\t1.Megabytes\t\t\t2.Kilobytes\n\t\t\t3.Gigabytes\t\t\t4.None\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-7.Which of the following represents the binary equivalent of the decimal number 25?");
        printf("\n\t\t\t1.11001\t\t\t2.10110\n\t\t\t3.11101\t\t\t4.10001\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-8.Which is an instant massenger that is used for chatting?");
        printf("\n\t\t\t1.Altavista\t\t\t2.MAC\n\t\t\t3.Microsoft Office\t\t\t4.Google Talk\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-9.Which one of the following is not search engine?");
        printf("\n\t\t\t1.Chrome\t\t\t2.Google\n\t\t\t3.Yahoo\t\t\t4.Bing\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-10.The first web browser is:");
        printf("\n\t\t\t1.Internet Eplorer\t\t\t2.Netscape\n\t\t\t3.World Wide Web\t\t\t4.Firefox\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        if (count==100) printf("\n\n\t\t\t\tEXCELLENT!!!Your score is:%d",count);
 else if (count>=80 && count<100) printf("\n\n\t\t\t\tVERY GOOD!!Your score is:%d",count);
 else if (count>=60 &&count<80) printf("\n\n\t\t\t\tGOOD! BUT YOU NEED TO KNOW MORE.Your score is:%d",count);
 else if (count>=40 && count<60) printf("\n\n\t\t\t\tSATISFACTORY RESULT.Your score is:%d",count);
 else printf("\n\n\t\t\t\tYOU ARE VERY POOR ABOUT THIS TOPIC.Your score is:%d",count);

}
int cse_question_1()
{
    system("cls");
    int count=0;
    printf("\n\t\t\tSelect an option and enter the ans no.\n\n");
     printf("\n\t\t\tQ-1.Dennis Was Author of Famous Programming Book _________ .");
        printf("\n\t\t\t1.C Programming and Techniques\t\t\t2.Thinking in C\n\t\t\t3.The C Programming Language\t\t\t4.Learn C Step By Step\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-2.C Programming was created at ______ by Dennis Ritchie.");
        printf("\n\t\t\t1.Stanford Lab\t\t\t2.Haward University\n\t\t\t3.AT&T Bell Laboratory\t\t\t4.L&T Laboratory\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-3.C Programming was created in Year _______ .");
        printf("\n\t\t\t1.1976\t\t\t2.1972\n\t\t\t3.1967\t\t\t4.1980\n");
        scanf("%d",&a);
        if(a==2)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 2.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-4.Many features of C were derived from an earlier language called _____.");
        printf("\n\t\t\t1.B\t\t\t2.PASCAL\n\t\t\t3.BASIC\t\t\t4.FORTRAN\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-5.Which Committee standardize C Programming Language ?");
        printf("\n\t\t\t1.ANSI\t\t\t2.W3C\n\t\t\t3.TRAI\t\t\t4.ISO\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-6.Ritchie and Brian Kernighan jointly carried out the development of C and that version is ________ .");
        printf("\n\t\t\t1.K&R C\t\t\t2.ANSI C\n\t\t\t3.C99\t\t\t4.R&K C\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-7.Who was Creator of B Language , which inspired Dennis Ritchie to create Strong Procedural Language called C ?");
        printf("\n\t\t\t1.Ken Thompson\t\t\t2.Thomas E. Kurtz\n\t\t\t3.John W. Backus\t\t\t4.Brian Kernighan\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-8.Dennis Ritchie Born On ___________ ?");
        printf("\n\t\t\t1.September 9, 1958\t\t\t2.September 9, 1951\n\t\t\t3.September 9, 1947\t\t\t4.September 9, 1941\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-9.Who is called as Father of C Programming Language ?");
        printf("\n\t\t\t1.Steve Jobs\t\t\t2.Dennis Ritchie\n\t\t\t3.Ken Thomson\t\t\t4.Bill Gates\n");
        scanf("%d",&a);
        if(a==2)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 2.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-10.By Nationality , Dennis Ritchie Was _________ ?");
        printf("\n\t\t\t1.British\t\t\t2.Russian\n\t\t\t3.Canadian\t\t\t4.American\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-11.What is required in each C program?");
        printf("\n\t\t\t1.The program must have at least one function\t\t\t2.The program does not require any function\n\t\t\t3.Input data\t\t\t4.Output data\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-12.What is a lint?");
        printf("\n\t\t\t1.C compiler\t\t\t2.Interactive debugger\n\t\t\t3.Analyzing tool\t\t\t4.C interpreter\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-13. Why is a macro used in place of a function?");
        printf("\n\t\t\t1.It reduces execution time.\t\t\t2.It reduces code size\n\t\t\t3.It increases execution time.\t\t\t4.It increases code size\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-14.Which one of the following is a loop construct that will always be executed once?");
        printf("\n\t\t\t1.for\t\t\t2.while\n\t\t\t3.switch\t\t\t4.do while\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
         printf("\n\t\t\tQ-15.Directives are translated by the");
        printf("\n\t\t\t1.Pre-processor\t\t\t2.Compiler\n\t\t\t3.Linker\t\t\t4.Editor\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        if (count==150) printf("\n\n\t\t\t\tEXCELLENT!!!Your score is:%d",count);
 else if (count>=120 && count<150) printf("\n\n\t\t\t\tVERY GOOD!!Your score is:%d",count);
 else if (count>=90 &&count<120) printf("\n\n\t\t\t\tGOOD! BUT YOU NEED TO KNOW MORE.Your score is:%d",count);
 else if (count>=60 && count<90) printf("\n\n\t\t\t\tSATISFACTORY RESULT.Your score is:%d",count);
 else printf("\n\n\t\t\t\tYOU ARE VERY POOR ABOUT THIS TOPIC.Your score is:%d",count);
}
int physics_question()
{
    system("cls");
    int count=0;
        printf("\n\t\t\tSelect an option and enter the ans no.\n\n");
        printf("\n\t\t\tQ-1.Nuclear sizes are expressed in a unit named");
        printf("\n\t\t\t1.Fermi\t\t\t2.Angstrom\n\t\t\t3.Newton\t\t4.Tesla\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-2.The speed of light will be minimum while passing through");
        printf("\n\t\t\t1.water\t\t\t2.vaccum\n\t\t\t3.air\t\t\t4.glass\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-3.Which of the following is not a vector quantity?");
        printf("\n\t\t\t1.speed\t\t\t2.velocity\n\t\t\t3.torque\t\t\t4.displacement\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-4.Which of the following is not the unit of time");
        printf("\n\t\t\t1.Micro second\t\t\t2.Leap year\n\t\t\t3. Parallactic second\t\t\t4.Solar day\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-5.The working principle of a washing machine is?");
        printf("\n\t\t\t1.reverse osmosis\t\t\t2.centrifugation\n\t\t\t3.diffusion\t\t\t4.dialysis\n");
        scanf("%d",&a);
        if(a==2)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 2.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-6.Ohm is a unit of measuring _________?");
        printf("\n\t\t\t1.Voltage\t\t\t2.Current\n\t\t\t3.Resistance\t\t\t4.None of the above\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-7.The alpha radiation is not used in radiotherapy because:");
        printf("\n\t\t\t1.It is unable to penetrate human skin\t\t\t2.It is an ionizing radiation\n\t\t\t3.It is not cost effective\t\t\t4.None\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-8.The universal law of gravitation was propounded by");
        printf("\n\t\t\t1.Kepler\t\t\t2.Galileo\n\t\t\t3.Copernicus\t\t\t4.Newton\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-9.Steel is more elastic than Rubber because");
        printf("\n\t\t\t1. Ratio of stress to strain is more\t\t\t2.Its density is high\n\t\t\t3.Ratio of stress to strain is less\t\t\t4.None\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-10.The main reserves of phosphorus in the biosphere is in the");
        printf("\n\t\t\t1.Hydrosphere\t\t\t2.Atmosphere\n\t\t\t3.Lithosphere\t\t\t4.Troposphere\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
             count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        if (count==100) printf("\n\n\t\t\t\tEXCELLENT!!!Your score is:%d",count);
 else if (count>=80 && count<100) printf("\n\n\t\t\t\tVERY GOOD!!Your score is:%d",count);
 else if (count>=60 &&count<80) printf("\n\n\t\t\t\tGOOD! BUT YOU NEED TO KNOW MORE.Your score is:%d",count);
 else if (count>=40 && count<60) printf("\n\n\t\t\t\tSATISFACTORY RESULT.Your score is:%d",count);
 else printf("\n\n\t\t\t\tYOU ARE VERY POOR ABOUT THIS TOPIC.Your score is:%d",count);

}
int physics_question_1()
{
    system("cls");
    int count=0;
    printf("\n\t\t\tSelect an option and enter the ans no.\n\n");
        printf("\n\t\t\tQ-1.Charge is the property associated with matter due to which it produces and experiences");
        printf("\n\t\t\t1.electric effects only\t\t\t2.magnetic effects only\n\t\t\t3.both electric and magnetic effects\t\t\t4.None of these\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-2.Charge is");
        printf("\n\t\t\t1.transferable\t\t\t2.associated with mass\n\t\t\t3.conserved\t\t\t4.All of these\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-3.Which of the following is the best insulator?");
        printf("\n\t\t\t1.Carbon\t\t\t2.Paper\n\t\t\t3.Graphite\t\t\t4.Ebonite\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-4.If a body is negatively charged, then it has");
        printf("\n\t\t\t1.excess of electrons\t\t\t2.excess of protons\n\t\t\t3.deficiency of electrons\t\t\t4.deficiency of neutrons\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-5.When a body is charged by induction, then the body");
        printf("\n\t\t\t1.becomes neutral\t\t\t2.does not lose any charge\n\t\t\t3.loses whole of the charge on it\t\t\t4.loses part of the charge on it\n");
        scanf("%d",&a);
        if(a==2)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 2.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
         printf("\n\t\t\tQ-6.On charging by conduction, mass of a body may");
        printf("\n\t\t\t1.increase\t\t\t2.decreases\n\t\t\t3.increase or decrease\t\t\t4.None of these\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-7.The law, governing the force between electric charges is known as");
        printf("\n\t\t\t1.Ampere's law\t\t\t2.Ohm's law\n\t\t\t3.Faraday's law\t\t\t4.Coulomb’s law\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
         printf("\n\t\t\tQ-8.What happens when some charge is placed on a soap bubble?");
        printf("\n\t\t\t1. Its radius decreases\t\t\t2.Its radius increases\n\t\t\t3.The bubble collapses\t\t\t4.None of these\n");
        scanf("%d",&a);
        if(a==2)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 2.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-9.The electric field inside a spherical shell of uniform surface charge density is");
        printf("\n\t\t\t1. zero\t\t\t2.constant, less than zero\n\t\t\t3.directly proportional to the distance from the centre.\t\t\t4.None of these\n");
        scanf("%d",&a);
        if(a==1)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==2||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 1.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-10.The force per unit charge is known as");
        printf("\n\t\t\t1.electric flux\t\t\t2.electric field\n\t\t\t3.electric potential\t\t\t4.electric current\n");
        scanf("%d",&a);
        if(a==2)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==3||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 2.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-11.Electric field lines provide information about");
        printf("\n\t\t\t1.field strength\t\t\t2.direction\n\t\t\t3.nature of charge\t\t\t4.all of these\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-12.The unit of electric dipole moment is");
        printf("\n\t\t\t1.newton\t\t\t2.coulomb\n\t\t\t3.farad\t\t\t4.debye\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-13.The surface considered for Gauss’s law is called");
        printf("\n\t\t\t1.Closed surface\t\t\t2.Spherical surface\n\t\t\t3.Gaussian surface\t\t\t4.Plane surface\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-14.The SI unit of electric flux is");
        printf("\n\t\t\t1.N C-1 m-2\t\t\t2.N C m-2\n\t\t\t3.N C-2 m2\t\t\t4.N C-1 m2\n");
        scanf("%d",&a);
        if(a==4)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==3)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 4.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        printf("\n\t\t\tQ-15.SI unit of permittivity of free space is");
        printf("\n\t\t\t1.Farad\t\t\t2.Weber\n\t\t\t3.C2N-1 m-2\t\t\t4.C2N-1 m-2\n");
        scanf("%d",&a);
        if(a==3)
        {
            printf("\n\t\t\t\tcorrect!!!\n");
            count=count+10;
        }
        else if(a==1||a==2||a==4)
        {
            printf("\n\t\t\t\twrong!!!\n");
            printf("\t\t\t\tcorrect ans is number of 3.\n\n");
            count=count-c;
        }
        else
        {
            printf("\n\t\t\tinvalid input\n");
        }
        if (count==150) printf("\n\n\t\t\t\tEXCELLENT!!!Your score is:%d",count);
 else if (count>=120 && count<150) printf("\n\n\t\t\t\tVERY GOOD!!Your score is:%d",count);
 else if (count>=90 &&count<120) printf("\n\n\t\t\t\tGOOD! BUT YOU NEED TO KNOW MORE.Your score is:%d",count);
 else if (count>=60 && count<90) printf("\n\n\t\t\t\tSATISFACTORY RESULT.Your score is:%d",count);
 else printf("\n\n\t\t\t\tYOU ARE VERY POOR ABOUT THIS TOPIC.Your score is:%d",count);
}
void help()
{
    system("cls");
    printf("\n\n\t\t\tTHIS IS A TECHNICAL QUIZ GAME OFFERED BY CODE AT GLANCE\n\n");
    printf("\n\t\t\tThere are two topics in this Game which are Physics and");
    printf("\n\t\t\tCse.Every topic have twenty five questions.Which ");
    printf("\n\t\t\tare divided two part ten and fifteen questions.");
    printf("\n\t\t\tThis program has many questions each with 4 options");
 printf("\n\t\t\tfor which 1 is correct. Your score will be calculated at the");
 printf("\n\t\t\tend.In this game ten questions for every topic.Ten marks for");
 printf("\n\t\t\tevery question in this game.If you don't select the correct answer");
 printf("\n\t\t\tyou will loss five marks.You will again start the game when calculate your");
 printf("\n\t\t\tscore.If you secure highest score your score will be recorded ALL THE BEST\n");
}
void highscore()
{
    system("cls");
    printf("\n\n\n\n\n\t\t\t\tHigh scores are:%d for ten questions and %d for fifteen questions\n",totalmarks,totalmarks1);
}
int funct()
{
    here:
    system("cls");
    printf("\n\t\t\tEnter your name only one word:");
        scanf("%s",name);
        printf("\n\t\t\t Your name is %s\n",name);
printf("\n\n\t\t\tPlease select a topic:-\n\n\t\t\t\t\t\tPress 1. For Cse_question\n\t\t\t\t\t\tPress 2.For Physics_question\n\n");
start:
scanf("%d",&topic);
if(topic==1)
{
    system("cls");
printf("\n\t\t\tWelcome to this topic:-\n\n");
printf("\n\t\t\tEnter please choose the number of questions:\t10 or 15\n\n");
scanf("%d",&choice);
if(choice==10)
{
cse_question();

printf("\n\n\t\tDo you want to play again?\n\n\t\t1.YES\n\t\t2.NO\n");
scanf("%d",&ans);
if(ans==1)
    goto here;
else if(ans==2)
    printf("\n\n\nThank you for playing Quiz Game");
}
else if(choice==15)
{
    cse_question_1();
printf("\n\n\t\tDo you want to play again?\n\n\t\t1.YES\n\t\t2.NO\n");
scanf("%d",&ans);
if(ans==1)
    goto here;
else if(ans==2)
    printf("\n\n\nThank you for playing Quiz Game");
}
}
else if(topic==2)
{
    system("cls");
printf("\n\t\t\tWelcome to this topic\n\n");
printf("\n\t\t\tEnter please choose the number of questions:\t10 or 15\n\n");
scanf("%d",&choice);
if(choice==10)
{
physics_question();

printf("\n\n\t\tDo you want to play again?\n\n\t\t1.YES\n\t\t2.NO\n");
scanf("%d",&ans);
if(ans==1)
    goto here;
else if(ans==2)
    printf("\n\n\nThank you for playing Quiz Game");
}
else if(choice==15)
{
    physics_question_1();
printf("\n\n\t\tDo you want to play again?\n\n\t\t1.YES\n\t\t2.NO\n");
scanf("%d",&ans);
if(ans==1)
    goto here;
else if(ans==2)
    printf("\n\n\nThank you for playing Quiz Game");
}
}
else{
    printf("\n\n\nWrong Input, please enter again.");
    goto start;
}
}
int main()
{
    char ch;
    system("color 0a");
    mainhome:
        system("cls");
 printf("\n\t\t\t\t\t\t WELCOME TO TECHNICAL QUIZ\n\n") ;
 printf("\n\t\t\t\t\t\t********************************");
 printf("\n\t\t\t\t\t\t* Enter 's' to start game      *");
 printf("\n\t\t\t\t\t\t* Enter 'v' to view high score *");
 printf("\n\t\t\t\t\t\t* Enter 'h' for help           *");
 printf("\n\t\t\t\t\t\t* Enter 'q' to quit            *");
 printf("\n\t\t\t\t\t\t********************************\n\n\t\t ");
 scanf("%c",&ch);
 if(ch=='h')
 {
     help();
     getch();
     goto mainhome;
 }
 else if(ch=='s')
 {
     funct();
     getch();
     goto mainhome;
 }
 else if(ch=='v')
 {
     highscore();
     getch();
     goto mainhome;
 }
 else if (ch=='q')
 {
 exit(1);
 }
 else
 {
     printf("enter key word\n");
     goto mainhome;
 }
 return 0;
}

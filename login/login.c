//?Geliştirilecek
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define VERI_BOYUTU 1000
struct students
{
    int student_code;
    char student_password[20];
};

struct administrative_academic
{
    int administrative_academic_code;
    char administrative_academic_password[20];
};
struct guest
{
    int guest_code;
    char guest_password[20];
};

void student_course_schedule(){
    //char veri[VERI_BOYUTU];
    FILE *fPrt;
    fPrt=fopen("C:\\Users\\muham\\Desktop\\student_course_schedule.txt","w+");

    if (fPrt==NULL)
    {
        printf("\033[3;31m");
        printf("\033[1;31m");
        printf("file could not be created");
        printf("\033[0m");
        exit(EXIT_FAILURE);
    }
    fprintf(fPrt, "Class Schedule:\n");
    fprintf(fPrt, "Tuesday: basic math - 10:30, database - 13:00\n");
    fprintf(fPrt, "Wednesday: programming basics - 08:55,career planning - 12:00, Ataturk's principles and the history of the revolution - 13:50\n");
    fprintf(fPrt, "Thursday: graphics and animation - 08:50, software architectures - 13:00, Turkish language - 15:30\n");
    fclose(fPrt);

    printf("\033[3;32m");
    printf("\033[1;32m");
    printf("Class schedule has been written to 'class_schedule.txt'.\n");
    printf("\033[0m");
}

void student_meetings(){
    FILE *fPrt;
    fPrt=fopen("C:\\Users\\muham\\Desktop\\student meetings.txt","w+");
    if (fPrt==NULL)
    {
        printf("\033[3;31m");
        printf("\033[1;31m");
        printf("file could not be created");
        printf("\033[0m");
        exit(EXIT_FAILURE);
    }

    fprintf(fPrt, "You do not have any ongoing meetings.\n");
    fclose(fPrt);
    printf("\033[3;32m");
    printf("\033[1;32m");
    printf("student meetings has been written to 'student meetings.txt'.\n");
    printf("\033[0m");
}
void teacher_syllabus(){
    FILE *fPrt;
    fPrt=fopen("C:\\Users\\muham\\Desktop\\teacher syllabus.txt","w+");
    if (fPrt==NULL)
    {
        printf("\033[3;31m");
        printf("\033[1;31m");
        printf("file could not be created");
        printf("\033[0m");
        exit(EXIT_FAILURE);
    }
    fprintf(fPrt, "Monday: Mathematics - 09:00, Physics - 11:00\n");
    fprintf(fPrt, "Tuesday: Chemistry - 10:00, Biology - 12:00\n");
    fprintf(fPrt, "Wednesday: History - 09:00, Geography - 11:00\n");
    fprintf(fPrt, "Thursday: English - 10:00, French - 12:00\n");
    fprintf(fPrt, "Friday: Computer Science - 09:00, Art - 11:00\n");
    fclose(fPrt);

    printf("\033[3;32m");
    printf("\033[1;32m");
    printf("teacher syllabus has been written to 'teacher syllabus.txt'.\n");
    printf("\033[0m");

}

void teacher_news(){
    FILE *fPrt;
    fPrt=fopen("C:\\Users\\muham\\Desktop\\teacher_news.txt","w+");
    if (fPrt==NULL)
    {
        printf("\033[3;31m");
        printf("\033[1;31m");
        printf("file could not be created");
        printf("\033[0m");
        exit(EXIT_FAILURE);
    }
    fprintf(fPrt,"https://news.stanford.edu/stories/2024/02/technology-in-education?form=MG0AV3\n");
    fprintf(fPrt,"https://www.rand.org/topics/education-reform.html?form=MG0AV3\n");
    fprintf(fPrt,"https://www.coursera.org/courses?form=MG0AV3\n");
    fprintf(fPrt,"https://www.oecd.org/en/topics/teacher-working-conditions.html?form=MG0AV3\n");
    fprintf(fPrt,"https://www.oecd.org/en/publications/measuring-innovation-in-education-2023_a7167546-en.html?form=MG0AV3\n");
    fclose(fPrt);

    printf("\033[3;32m");
    printf("\033[1;32m");
    printf("teacher new has been written to 'teacher news.txt\n");
    printf("\033[0m");
}

void guest_course_schedule(){
    FILE *fPrt;
    fPrt=fopen("C:\\Users\\muham\\Desktop\\guest_class_schedule.txt","w+");
    if (fPrt==NULL)
    {
        printf("\033[3;31m");
        printf("\033[1;31m");
        printf("file could not be created");
        printf("\033[0m");
        exit(EXIT_FAILURE);
    }
    fprintf(fPrt, "guest student Class Schedule:\n");
    fprintf(fPrt, "Tuesday: basic math - 10:30, database - 13:00\n");
    fprintf(fPrt, "Wednesday: programming basics - 08:55,career planning - 12:00, Ataturk's principles and the history of the revolution - 13:50\n");
    fprintf(fPrt, "Thursday: graphics and animation - 08:50, software architectures - 13:00, Turkish language - 15:30\n");
    fclose(fPrt);

    printf("\033[3;32m");
    printf("\033[1;32m");
    printf("Class schedule has been written to 'guest_class_schedule.txt'.\n");
    printf("\033[0m");
}
void guest_news(){
    FILE *fPrt;
    fPrt=fopen("C:\\Users\\muham\\Desktop\\guest_class_schedule.txt","w+");
    if (fPrt==NULL)
    {
        printf("\033[3;31m");
        printf("\033[1;31m");
        printf("file could not be created");
        printf("\033[0m");
        exit(EXIT_FAILURE);
    }
    fprintf(fPrt, "You do not have any ongoing meetings.\n");
    fclose(fPrt);

    printf("\033[3;32m");
    printf("\033[1;32m");
    printf("guest meetings has been written to 'guest meetings.txt'.\n");
    printf("\033[0m");
}
int main(){
    int sayac=0;

    struct students student1={262484030,"Selam123"};
    struct students student2={262484031,"iyi321"};
    struct students student3={262484032,"senden345"};
    struct students student4={262484033,"naber678"};
    struct students     studentList[]={student1,student2,student3,student4};
    //?-----------------------------------------------------------------
    struct administrative_academic teacher1={123,"yetkili123"};
    struct administrative_academic teacher2={456,"binbasi456"};
    struct administrative_academic teachersList[]={teacher1,teacher2};
    //?-----------------------------------------------------------------
    struct guest guest1={147,"misafirli123"};
    struct guest guest2={258,"misafir456"};
    struct guest guest3={369,"misafir123"};
    struct guest guestList[]={guest1,guest2,guest3};

    int loginType;
    int input_Code;
    char input_Password[20];
    //printf("\033[1;31m");
    printf("\t\t\t\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t|1-student |2-administrative_academic |3-guest |\n");//11 silindi
    printf("\t\t\t\t\t\t\t\t------------------------------------------------\n");
    printf("please select loginType=");
    scanf("%d",&loginType);

    if (loginType==1|| loginType ==2|| loginType==3){

    printf("please enter your user code: ");
     printf("\033[1m");
     printf("\033[3m");
     scanf("%d",&input_Code);
     printf("\033[0m");

    printf("please enter your password: ");
    printf("\033[1m");
    printf("\033[3m");
    scanf("%s",&input_Password);
    printf("\033[0m");
    int is_authenticated=0;

// islemyap(param1,param2,param3)
//{
    //printf("\t\t\t\t\t\t\t\t|"&param1 &"schedule |2-meetings|\n");
//}

//islemyap("stuentcourse",2,4);


    if (loginType==1){
        for (int i = 0; i < 4; i++)
        {
            if (studentList[i].student_code==input_Code && strcmp(studentList[i].student_password,input_Password)==0)
            {
                is_authenticated=1;
                printf("\033[3;32m");
                printf("\033[1;32m");//*1 yazı türü 32 renk belirtir
                printf("*login succesfull*\n");
                printf("\033[0m");
                printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t|1-student course schedule |2-meetings|\n");//11 silindi
                printf("\t\t\t\t\t\t\t\t---------------------------------------\n");
                printf("please choose: ");
                int student_choise=0;
                scanf("%d",&student_choise);
                if (student_choise==1)
                {
                   student_course_schedule();
                }else if (student_choise ==2)
                {
                    student_meetings();
                }else{
                    printf("\033[3;31m");
                    printf("\033[1;31m");
                    printf("please select 1 or 2");
                    printf("\033[0m\n");
                    break;
                }
            }
        }
    }else if (loginType==2)
    {
        for (int i = 0; i < 2; i++)
        {
            if (teachersList[i].administrative_academic_code==input_Code && strcmp(teachersList[i].administrative_academic_password,input_Password)==0)
            {
                is_authenticated=1;
                printf("\033[3;32m");
                printf("\033[1;32m");
                printf("*login succesfull*\n");
                 printf("\033[0m");
                printf("\t\t\t\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t|1-teacher syllabus| 2-teacher news|\n");//11 silindi
                printf("\t\t\t\t\t\t\t\t------------------------------------\n");
                printf("please choose: ");
                int teacher_choise=0;
                scanf("%d",&teacher_choise);
                if (teacher_choise==1)
                {
                    teacher_syllabus();
                }else if (teacher_choise==2)
                {
                    teacher_news();
                }else{
                    printf("\033[3;31m");
                    printf("\033[1;31m");
                    printf("please select 1 or 2");
                    printf("\033[0m\n");
                    break;
                }

            }
        }
    }else if (loginType==3)
    {
        for (int i = 0; i < 3; i++)
        {
            if (guestList[i].guest_code==input_Code && strcmp(guestList[i].guest_password,input_Password)==0)
            {
                is_authenticated=1;
                printf("\033[3;32m");
                printf("\033[1;32m");
                printf("*login succesfull*\n");
                printf("\033[0m");
                printf("\t\t\t\t\t\t\t\t------------------------------------\n");
                printf("\t\t\t\t\t\t\t\t|1-guest_course_schedule | 2-wait|\n");//11 silindi
                printf("\t\t\t\t\t\t\t\t------------------------------------\n");
                printf("please choose: ");
                int guest_chosie=0;
                scanf("%d",&guest_chosie);
                if (guest_chosie==1)
                {
                    guest_course_schedule();
                }else if (guest_chosie==2)
                {
                    guest_course_schedule();
                }
                else{
                    printf("\033[3;31m");
                    printf("\033[1;31m");
                    printf("please select 1 or 2");
                    printf("\033[0m\n");
                    break;
                }

            }
        }
    }
    //!---------------------------------
    if (is_authenticated)
        {
            //printf("login successful\n");
            sayac++;
        }else{
            printf("\033[3;31m");
            printf("\033[1;31m");
            printf("\nYour user code, password or login type may be incorrect.!\n");
            printf("\033[0m");
        }
    }else{
        printf("\033[3;31m");
        printf("\033[1;31m");
        printf("Please choose 1, 2, or 3\n");
        printf("\033[0m");
    }

    system("pause");
    }

    //TODO gerçek bir login ekranı tasarla / | \ vs kullanarak
    //!void yapısını öğren öğrenci,öğretmen ve misafirlerin structlarını orada tanımla.int main içinde karşılaştırma yap çünkü böyle çok karışık ve iç içe.
    //!öğrenci login yaparsa Dersler ve sınav tarihleri arasından seçim yapsın ve seçtiğini görsün
    //!iç içe diziler kullanmaya çalış
    //?OKU
    //! students,administrative_academic ve guestin verileri bir txt dosyasında yazılıyor olsaydı bu verileri oradan okuyup tekrar çalışması gerekseydi?..:(
    //!çııkış içinde sor
    //printf("student code= %d \nstudent password= %s\n",student1.student_code,student1.student_password);
    //printf("------------------------------------------------------\n");
    //printf("student code= %d \nstudent password= %s\n",student2.student_code,student2.student_password);
    //printf("------------------------------------------------------\n");
    //printf("student code= %d \nstudent password= %s\n",student3.student_code,student3.student_password);
    //printf("------------------------------------------------------\n");
    //printf("student code= %d \nstudent password= %s\n",student4.student_code,student4.student_password);
    //printf("------------------------------------------------------\n");
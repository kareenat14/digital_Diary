#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include"add_Note.h"
#include"change_PW.h"
#include"check_PW.h"
#include"delete_Note.h"
#include"view_Diary.h"
void main()
{
    addNote();
    checkPW();
    changePW();
    deleteNote();
    viewDiary();
}
#include <stdio.h>
#include <string.h>

typedef struct Person
{
    int person_id;
    char person_name[20];
} PersonInfo;

int main()
{
    //常规的定义方式 必须使用struct
    struct Person p1;
    //使用Person的别名进行定义，不需要struct
    PersonInfo p2;

    p1.person_id = 1;
    strcpy(p1.person_name, "coco");
    printf("p1.person_id=%d  p1.person_name=%s\r\n", p1.person_id, p1.person_name);

    p2.person_id = 2;
    strcpy(p2.person_name, "tom");
    printf("p2.person_id=%d  p2.person_name=%s\r\n", p2.person_id, p2.person_name);
}
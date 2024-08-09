#ifndef USERINFO_H
#define USERINFO_H
#include "QString"

typedef struct userinfo
{
    QString username;
    long id;
    QString enrolltime;
    QString workstype;
    int worksnum;
    int totalrate;
    double averagerate;
    struct userinfo *next;
}userinfo;

#endif // USERINFO_H

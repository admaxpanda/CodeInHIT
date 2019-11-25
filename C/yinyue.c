#include <stdio.h>
#include <windows.h>
#define qdo 262
#define qre 294
#define qmi 330
#define qfa 349
#define qso 392
#define qla 440
#define qsi 494
#define do 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define do1 1046
#define re1 1175
#define mi1 1318
#define fa1 1480
#define so1 1568
#define la1 1760
#define si1 1976
#define sqdo 277
#define sqre 311
#define sqfa 370
#define sqso 415
#define sqla 466
#define sdo 554
#define sre 622
#define sfa 740
#define sso 831
#define sla 932
#define sdo1 1046
#define sre1 1245
#define sfa1 1480
#define sso1 1661
#define sla1 1865
#define chang 1000
#define chang3 1500
#define p 500
#define w 250
#define q 125
#define b(a,b) Beep(a,b)
int main()
{
    b(re,q);
    b(la,q);
    b(fa,q);
    b(so,q);
    b(fa,q);
    b(do,q);
    b(re,q);
    b(mi,q);

    b(re,q);
    b(la,q);
    b(fa,q);
    b(so,q);
    b(fa,q);
    b(do,q);
    b(re,w);

    b(re,q);
    b(la,q);
    b(fa,q);
    b(so,q);
    b(fa,q);
    b(do,q);
    b(re,q);
    b(mi,q);

    b(fa,q);
    b(mi,q);
    b(re,q);
    b(do,q);
    b(re,q);
    b(re,p);

    b(re,chang);
    b(re,p);
    b(re,q);
    b(la,q);
    b(fa,q);
    b(so,w);

    b(re,chang);
    b(la,q);
    b(la,q);
    b(fa,q);
    b(so,q);
    b(fa,q);
    b(mi,q);
    b(do,q);
    b(re,w);

    b(re,q);
    b(la,q);
    b(fa,q);
    b(so,q);
    b(fa,q);
    b(do,q);
    b(re,q);
    b(mi,q);

    b(re,q);
    b(la,q);
    b(fa,q);
    b(so,q);
    b(fa,q);
    b(do,q);
    b(re,w);

    b(re,q);
    b(la,q);
    b(fa,q);
    b(so,q);
    b(fa,q);
    b(do,q);
    b(re,q);
    b(mi,q);

    b(fa,q);
    b(mi,q);
    b(re,q);
    b(do,q);
    b(re,q);
    b(re,p);
}

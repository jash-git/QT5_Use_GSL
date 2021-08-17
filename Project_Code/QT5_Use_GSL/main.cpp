#include <QCoreApplication>
#include <QDebug>
#include <gsl/gsl_sf_bessel.h>
#include <stdio.h>

void Pause()
{
    printf("Press Enter key to continue ...");
    fgetc(stdin);
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    double x = 5.0;
    double y = gsl_sf_bessel_J0 (x);
    printf ("J0(%g) = %.18e\n", x, y);
    //qDebug()<< "J0(%g) = %.18e\n", x, y;
    Pause();
    return 0;//return a.exec();
}

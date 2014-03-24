#include "adcreader.h"
#include <QDebug>
#include "gpio-sysfs.h"
#include "gz_clk.h"


void ADCreader::run()
{
	running = true;
	while (running) {
		qDebug() << "Tick";
		sleep(1);
	}
}

void ADCreader::quit()
{
	running = false;
	exit(0);
}

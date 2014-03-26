#include <window.h>
#include <adcreader.h>
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	//add the thread
        //adcreader = new ADCreader();
        //adcreader->start();
        //if (adcreader->hasSample())
        //    inVal = adcreader->getSample();

	// create the window
	Window window;
	window.showMaximized();

	// call the window.timerEvent function every 40 ms
	window.startTimer(40);

	// execute the application
	return app.exec();
}

#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>
#include <qapplication.h>
#include <qmainwindow.h>

int main (int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow mainWindow;
    mainWindow.setWindowTitle("Diary");
    
    QTextEdit *textEdit = new QTextEdit(&mainWindow);
    mainWindow.setCentralWidget(textEdit);

    mainWindow.resize(800, 600);
    mainWindow.show();

    return app.exec();
}


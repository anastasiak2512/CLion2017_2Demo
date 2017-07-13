//Disassembly view is available for GDB users via Force Step Into action.

#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QPushButton button("Hello world !");

    button.show();
    app.exec();

    return 0;
}



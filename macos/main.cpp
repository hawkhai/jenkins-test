#include <QApplication>
#include <QPushButton>
#include <QtNetwork>

int main(int argc, char *argv[]) {

    auto temp1 = QSslSocket::sslLibraryBuildVersionString();
    auto temp2 = QSslSocket::supportsSsl();

    QNetworkAccessManager *manager = new QNetworkAccessManager(nullptr);
    auto temp3 = manager->supportedSchemes().join("/");

    QApplication a(argc, argv);
    QPushButton button(temp1 + "\n" + temp3, nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}
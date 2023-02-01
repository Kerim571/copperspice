#include <QtCore>
#include <QtGui>
#include <iostream>

class MainWindow : public QWidget	//Klasse MainWindow kriegt QWidget von Public vererbt
{
private:				//Buttons und Funktionen werden angelegt
    QLineEdit *display;
    QGridLayout *layout;
    QPushButton *button0;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *buttonAddieren;
    QPushButton *buttonSubtrahieren;
    QPushButton *buttonMultiplizieren;
    QPushButton *buttonDividieren;
    QPushButton *buttonErgebnis;
    QPushButton *buttonKomma;
    QPushButton *buttonLoschen;
    QPushButton *buttonVorzeichen;
    QPushButton *buttonProzentInDez;
   

    void button0_clicked();
    void button1_clicked();
    void button2_clicked();
    void button3_clicked();
    void button4_clicked();
    void button5_clicked();
    void button6_clicked();
    void button7_clicked();
    void button8_clicked();
    void button9_clicked();
    void buttonAddieren_clicked();
    void buttonSubtrahieren_clicked();
    void buttonMultiplizieren_clicked();
    void buttonDividieren_clicked();
    void buttonErgebnis_clicked();
    void buttonKomma_clicked();
    void buttonLoschen_clicked();
    void buttonVorzeichen_clicked();
    void buttonProzentInDez_clicked();

    double zahl1;
    double zahl2;
    double ergebnis;
    char operation;

public:
    MainWindow();
};

MainWindow::MainWindow()
{
    setMinimumSize(700, 350);

    display = new QLineEdit("0", this);
    display->setReadOnly(true);
    display->setAlignment(Qt::AlignRight);
    display->setMaxLength(20);


    //Button erstellen
    QPushButton *button1 = new QPushButton();
    button1->setText("1");
    QPushButton *button2 = new QPushButton();
    button2->setText("2");
    QPushButton *button3 = new QPushButton();
    button3->setText("3");
    QPushButton *button4 = new QPushButton();
    button4->setText("4");
    QPushButton *button5 = new QPushButton();
    button5->setText("5");
    QPushButton *button6 = new QPushButton();
    button6->setText("6");
    QPushButton *button7 = new QPushButton();
    button7->setText("7");
    QPushButton *button8 = new QPushButton();
    button8->setText("8");
    QPushButton *button9 = new QPushButton();
    button9->setText("9");
    QPushButton *button0 = new QPushButton();
    button0->setText("0");
    QPushButton *buttonAddieren = new QPushButton();
    buttonAddieren->setText("+");
    QPushButton *buttonSubtrahieren = new QPushButton();
    buttonSubtrahieren->setText("-");
    QPushButton *buttonMultiplizieren = new QPushButton();
    buttonMultiplizieren->setText("*");
    QPushButton *buttonDividieren = new QPushButton();
    buttonDividieren->setText("/");
    QPushButton *buttonErgebnis = new QPushButton();
    buttonErgebnis->setText("=");
    QPushButton *buttonKomma = new QPushButton();
    buttonKomma->setText(",");
    QPushButton *buttonLoschen = new QPushButton();
    buttonLoschen->setText("AC");
    QPushButton *buttonVorzeichen = new QPushButton();
    buttonVorzeichen->setText("+/-");
    QPushButton *buttonProzentInDez = new QPushButton();
    buttonProzentInDez->setText("%");

    //grid
    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(display, 0, 0, 1, 4);
    grid->addWidget(buttonLoschen, 1, 0);
    grid->addWidget(buttonVorzeichen, 1, 1);
    grid->addWidget(buttonProzentInDez, 1, 2);
    grid->addWidget(buttonDividieren, 1, 3);
    grid->addWidget(button7, 2, 0);
    grid->addWidget(button8, 2, 1);
    grid->addWidget(button9, 2, 2);
    grid->addWidget(buttonMultiplizieren, 2, 3);
    grid->addWidget(button4, 3, 0);
    grid->addWidget(button5, 3, 1);
    grid->addWidget(button6, 3, 2);
    grid->addWidget(buttonSubtrahieren, 3, 3);
    grid->addWidget(button1, 4, 0);
    grid->addWidget(button2, 4, 1);
    grid->addWidget(button3, 4, 2);
    grid->addWidget(buttonAddieren, 4, 3);
    grid->addWidget(button0, 5, 0);
    grid->addWidget(buttonKomma, 5, 2);
    grid->addWidget(buttonErgebnis, 5, 3);

    setLayout(grid);

    //Funktionen mit jeweiligen Button verbinden
    connect(button0, &QPushButton::clicked, this, &MainWindow::button0_clicked);
    connect(button1, &QPushButton::clicked, this, &MainWindow::button1_clicked);
    connect(button2, &QPushButton::clicked, this, &MainWindow::button2_clicked);
    connect(button3, &QPushButton::clicked, this, &MainWindow::button3_clicked);
    connect(button4, &QPushButton::clicked, this, &MainWindow::button4_clicked);
    connect(button5, &QPushButton::clicked, this, &MainWindow::button5_clicked);
    connect(button6, &QPushButton::clicked, this, &MainWindow::button6_clicked);
    connect(button7, &QPushButton::clicked, this, &MainWindow::button7_clicked);
    connect(button8, &QPushButton::clicked, this, &MainWindow::button8_clicked);
    connect(button9, &QPushButton::clicked, this, &MainWindow::button9_clicked);
    connect(buttonKomma, &QPushButton::clicked, this, &MainWindow::buttonKomma_clicked);
    connect(buttonAddieren, &QPushButton::clicked, this, &MainWindow::buttonAddieren_clicked);
    connect(buttonSubtrahieren, &QPushButton::clicked, this, &MainWindow::buttonSubtrahieren_clicked);
    connect(buttonMultiplizieren, &QPushButton::clicked, this, &MainWindow::buttonMultiplizieren_clicked);
    connect(buttonDividieren, &QPushButton::clicked, this, &MainWindow::buttonDividieren_clicked);
    connect(buttonErgebnis, &QPushButton::clicked, this, &MainWindow::buttonErgebnis_clicked);
    connect(buttonLoschen, &QPushButton::clicked, this, &MainWindow::buttonLoschen_clicked);
    connect(buttonVorzeichen, &QPushButton::clicked, this, &MainWindow::buttonVorzeichen_clicked);
    connect(buttonProzentInDez, &QPushButton::clicked, this, &MainWindow::buttonProzentInDez_clicked);
}

//Funktionen
void MainWindow::button1_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("1");
}

void MainWindow::button2_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("2");
}

void MainWindow::button3_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("3");
}

void MainWindow::button4_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("4");
}

void MainWindow::button5_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("5");
}

void MainWindow::button6_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("6");
}

void MainWindow::button7_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("7");
}

void MainWindow::button8_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("8");
}

void MainWindow::button9_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("9");
}

void MainWindow::button0_clicked()
{
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("0");
}

void MainWindow::buttonAddieren_clicked()
{
    zahl1 = display->text().toDouble();
    operation = '+';
    display->clear();
}

void MainWindow::buttonSubtrahieren_clicked()
{
    zahl1 = display->text().toDouble();
    operation = '-';
    display->clear();
}

void MainWindow::buttonMultiplizieren_clicked()
{
    zahl1 = display->text().toDouble();
    operation = '*';
    display->clear();
}

void MainWindow::buttonDividieren_clicked()
{
    zahl1 = display->text().toDouble();
    operation = '/';
    display->clear();
}

void MainWindow::buttonKomma_clicked()
{
    if(!display->text().contains(","))
    {
        display->insert(",");
    }
}

void MainWindow::buttonVorzeichen_clicked()
{
    if(display->text() != "0");
    {
        double zahl = 0.0;
	zahl = display->text().toDouble();
	zahl = zahl*(-1);
	display->setText(QString::number(zahl));
    }
}

void MainWindow::buttonProzentInDez_clicked()
{
    zahl1 = display->text().toDouble();
    ergebnis = zahl1 / 100;
    display->setText(QString::number(ergebnis));
}

void MainWindow::buttonErgebnis_clicked()
{
    zahl2 = display->text().toDouble();

    if(operation == '+')
    {
        ergebnis = zahl1+ zahl2;
    }
    else if(operation == '-')
    {
        ergebnis = zahl1 - zahl2;
    }
    else if(operation == '*')
    {
        ergebnis = zahl1 * zahl2;
    }
    else if(operation == '/')
    {
        if(zahl2 != 0)
        {
            ergebnis = zahl1 / zahl2;
        }
        else
        {
            display->setText("MATH ERROR!");
            return;
        }
    }

    display->setText(QString::number(ergebnis));
}

void MainWindow::buttonLoschen_clicked()
{
    display->clear();
    display->setText("0");
    zahl1 = 0;
    zahl2 = 0;
    ergebnis = 0;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow *window = new MainWindow();
    window->show();

    return app.exec();
}

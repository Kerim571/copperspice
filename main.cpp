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
    button1 = new QPushButton("1", this);
    button2 = new QPushButton("2", this);
    button3 = new QPushButton("3", this);
    button4 = new QPushButton("4", this);
    button5 = new QPushButton("5", this);
    button6 = new QPushButton("6", this);
    button7 = new QPushButton("7", this);
    button8 = new QPushButton("8", this);
    button9 = new QPushButton("9", this);
    button0 = new QPushButton("0", this);
    buttonAddieren = new QPushButton("+", this);
    buttonSubtrahieren = new QPushButton("-", this);
    buttonMultiplizieren = new QPushButton("*", this);
    buttonDividieren = new QPushButton("/", this);
    buttonErgebnis = new QPushButton("=",this);
    buttonKomma = new QPushButton(",",this);
    buttonLoschen = new QPushButton("AC",this);
    buttonVorzeichen = new QPushButton("Vorzeichen", this);
    buttonProzentInDez = new QPushButton("%", this);

    //grid 
    layout = new QGridLayout(this);
    layout->addWidget(display, 0, 0, 1, 4);
    layout->addWidget(buttonLoschen, 1, 0);
    layout->addWidget(buttonVorzeichen, 1, 1);
    layout->addWidget(buttonProzentInDez, 1, 2);
    layout->addWidget(buttonDividieren, 1, 3);
    layout->addWidget(button7, 2, 0);
    layout->addWidget(button8, 2, 1);
    layout->addWidget(button9, 2, 2);
    layout->addWidget(buttonMultiplizieren, 2, 3);
    layout->addWidget(button4, 3, 0);
    layout->addWidget(button5, 3, 1);
    layout->addWidget(button6, 3, 2);
    layout->addWidget(buttonSubtrahieren, 3, 3);
    layout->addWidget(button1, 4, 0);
    layout->addWidget(button2, 4, 1);
    layout->addWidget(button3, 4, 2);
    layout->addWidget(buttonAddieren, 4, 3);
    layout->addWidget(button0, 5, 0);
    layout->addWidget(buttonKomma, 5, 2);
    layout->addWidget(buttonErgebnis, 5, 3);

    setLayout(layout);

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
    if(display->text() == "0")
    {
        display->clear();
    }
    display->insert("-");
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

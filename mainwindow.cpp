    #include "mainwindow.h"
    #include "dialog.h"
    #include "./ui_mainwindow.h"
    #include <QApplication>

    MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
    }
    MainWindow::~MainWindow()
    {
        delete ui;
    }


    QString selected;

    void MainWindow::on_comboBox_activated(int index)
    {
            selected = ui->comboBox->itemText(index);
    }
    QStringList Chest  {
        "1. Warm-Up (10 mins cardio)",
        "2. Barbell Bench Press (3 sets of 8-10 reps)",
        "3. Incline Dumbbell Press (3 sets of 10-12 reps)",
        "4. Flat Dumbbell Flyes (3 sets of 12-15 reps)",
        "5. Cable Crossover (3 sets of 15-20 reps)"
    };

    QStringList Tricep  {
        "1. Close-Grip Bench Press (3 sets of 8-10 reps)",
        "2. Tricep Dips (3 sets of 10-12 reps)",
        "3. Tricep Pushdown (3 sets of 12-15 reps)",
        "4. Skull Crushers (3 sets of 10-12 reps)",
        "5. Rope Overhead Tricep Extension (3 sets of 12-15 reps)"
    };

    QStringList Back {
        "1. Pull-Ups (3 sets of 8-10 reps)",
        "2. Chin-Ups (3 sets of 8-10 reps)",
        "3. Lat Pulldowns (3 sets of 10-12 reps)",
        "4. Bent-Over Rows (3 sets of 10-12 reps)",
        "5. T-Bar Rows (3 sets of 10-12 reps)"
    };

    QStringList Bicep {
        "1. Barbell Curls (3 sets of 8-10 reps)",
        "2. Hammer Curls (3 sets of 10-12 reps)",
        "3. Preacher Curls (3 sets of 10-12 reps)",
        "4. Concentration Curls (3 sets of 12-15 reps)",
        "5. Incline Dumbbell Curls (3 sets of 10-12 reps)"
    };


    QStringList Shoulder {
        "1. Overhead Press (3 sets of 8-10 reps)",
        "2. Lateral Raises (3 sets of 12-15 reps)",
        "3. Front Raises (3 sets of 12-15 reps)",
        "4. Rear Delt Flyes (3 sets of 12-15 reps)",
        "5. Arnold Press (3 sets of 10-12 reps)"
    };

    QStringList Legs {
        "1. Squats (3 sets of 8-10 reps)",
        "2. Leg Press (3 sets of 10-12 reps)",
        "3. Lunges (3 sets of 12-15 reps per leg)",
        "4. Romanian Deadlifts (3 sets of 10-12 reps)",
        "5. Leg Curls (3 sets of 12-15 reps)"
    };    void MainWindow::on_pushButton_clicked()
    {
        Dialog dialog;
        if (selected == "CHEST")
        {
            for(const QString& exercise : Chest)
            {
                dialog.appendTextToBrowser(exercise);
            }
        }
        else if (selected == "TRICEP") {
            for (const QString& exercise : Tricep) {
                dialog.appendTextToBrowser(exercise);
            }
        }
        else if (selected == "BACK") {
            for (const QString& exercise : Back) {
                dialog.appendTextToBrowser(exercise);
            }
        }
        else if (selected == "BICEP") {
            for (const QString& exercise : Bicep) {
                dialog.appendTextToBrowser(exercise);
            }
        }
        else if (selected == "SHOULDER") {
            for (const QString& exercise : Shoulder) {
                dialog.appendTextToBrowser(exercise);
            }
        }
        else if (selected == "LEGS") {
            for (const QString& exercise : Legs) {
                dialog.appendTextToBrowser(exercise);
            }
        }
        else
        {
            qDebug()<<"Selected Item:"<<selected;
        }
        dialog.setModal(true);
        dialog.exec();
    }

#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include "graphwidget.h"
#include <QInputDialog>
#include <QDebug>
#include <QPainter>
#include <QLabel>


using namespace std;
int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    GraphWidget graphWidget;



    QPushButton addButton("Добавить вершину");
    QPushButton removeButton("Удалить вершину");
    QPushButton addEdgeButton("добавить ребро");
    QPushButton removeEdgeButton("Удалить ребро");
    QPushButton editMatrixButton("Ред. матрицу");
    QPushButton dfsButton("Обход в глубину");
    QPushButton bfsButton("Обход в ширину");
    QPushButton dijkstraButton("Алг. Д.");

    QObject::connect(&addButton, &QPushButton::clicked, [&graphWidget]() {
        int x = QInputDialog::getInt(nullptr, "Добавить вершину", "Введите X коорд-ту:");
        int y = QInputDialog::getInt(nullptr, "Добавить вершину", "Введите Y коорд-ту:");

        graphWidget.addVertex(x, y);
    });

    QObject::connect(&removeButton, &QPushButton::clicked, [&graphWidget]() {
        int index = QInputDialog::getInt(nullptr, "Удалить вершину", "Введите индекс удаляемой вершины:");

        graphWidget.removeVertex(index);
    });

    QObject::connect(&addEdgeButton, &QPushButton::clicked, [&graphWidget]() {
        int from = QInputDialog::getInt(nullptr, "Добавить ребро", "Из вершины:");
        int to = QInputDialog::getInt(nullptr, "Добавить ребро", "В вершину:");
        int weight = QInputDialog::getInt(nullptr, "Добавить вес ребра", "Вес ");
        graphWidget.addEdge(from, to, weight);
    });

    QObject::connect(&removeEdgeButton, &QPushButton::clicked, [&graphWidget]() {
        int from = QInputDialog::getInt(nullptr, "Удалить ребро", "Из вершины:");
        int to = QInputDialog::getInt(nullptr, "Удалить ребро", "В вершину:");

        graphWidget.removeEdge(from, to);
    });

    QObject::connect(&editMatrixButton, &QPushButton::clicked, [&graphWidget]() {
        QVector<QVector<int>> matrix;

        for (int i = 0; i < 6; ++i) {
            QVector<int> row;
            for (int j = 0; j < 6; ++j) {
                int value = QInputDialog::getInt(nullptr, "Ред. матрицу",
                                                 QString("Введите значение для элемента (%1,%2):").arg(i).arg(j));
                row.append(value);
            }
            matrix.append(row);
        }

        graphWidget.setAdjacencyMatrix(matrix);
    });

    QObject::connect(&dfsButton, &QPushButton::clicked, [&graphWidget]() {
        graphWidget.depthFirstSearch(0);
    });

    QObject::connect(&bfsButton, &QPushButton::clicked, [&graphWidget]() {
        graphWidget.breadthFirstSearch(0);
    });

    QObject::connect(&dijkstraButton, &QPushButton::clicked, [&graphWidget]() {
        graphWidget.dijkstra(0, 5);
    });

    QHBoxLayout layout;
    layout.addWidget(&addButton);
    layout.addWidget(&removeButton);
    layout.addWidget(&addEdgeButton);
    layout.addWidget(&removeEdgeButton);
    layout.addWidget(&editMatrixButton);
    layout.addWidget(&dfsButton);
    layout.addWidget(&bfsButton);
    layout.addWidget(&dijkstraButton);

    QWidget mainWidget;
    mainWidget.setLayout(&layout);

    QVBoxLayout mainLayout;
    mainLayout.addWidget(&graphWidget);
    mainLayout.addWidget(&mainWidget);

    QWidget window;
    window.setLayout(&mainLayout);
    window.setWindowTitle("Graph Editor");
    window.show();

    return app.exec();
}

#include "3dvehiclemodel.h"
#include <QDebug>

Vehicle3DModel::Vehicle3DModel(QWidget *parent)
    : QOpenGLWidget(parent), shaderProgram(nullptr), rollAngle(0), pitchAngle(0), yawAngle(0) {}

void Vehicle3DModel::initializeGL() {
    initializeOpenGLFunctions();

    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);

    shaderProgram = new QOpenGLShaderProgram(this);
    if (!shaderProgram->addShaderFromSourceFile(QOpenGLShader::Vertex, ":/shaders/vertex.glsl") ||
        !shaderProgram->addShaderFromSourceFile(QOpenGLShader::Fragment, ":/shaders/fragment.glsl") ||
        !shaderProgram->link()) {
        qDebug() << "Shader program linking failed:" << shaderProgram->log();
    } else {
        qDebug() << "Shader program linked successfully.";
    }
}

void Vehicle3DModel::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
}

void Vehicle3DModel::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    if (!shaderProgram->bind()) {
        qDebug() << "Failed to bind shader program!";
        return;
    }

    // Draw simple axes
    glBindVertexArray(VAO);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(1.0f, 0.0f, 0.0f);  // X-axis (red)
    glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 1.0f, 0.0f);  // Y-axis (green)
    glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(0.0f, 0.0f, 0.0f); glVertex3f(0.0f, 0.0f, 1.0f);  // Z-axis (blue)
    glEnd();

    glBindVertexArray(0);
    shaderProgram->release();
}

void Vehicle3DModel::setRotation(float roll, float pitch, float yaw) {
    rollAngle = roll;
    pitchAngle = pitch;
    yawAngle = yaw;
    update();  // Triggers a repaint
}

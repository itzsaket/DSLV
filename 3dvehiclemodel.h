#ifndef VEHICLE3DMODEL_H
#define VEHICLE3DMODEL_H

#include <QOpenGLWidget>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions_3_3_Core>

class Vehicle3DModel : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core {
    Q_OBJECT

public:
    explicit Vehicle3DModel(QWidget *parent = nullptr);
    void setRotation(float roll, float pitch, float yaw);

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

private:
    QOpenGLShaderProgram *shaderProgram;
    GLuint VAO;  // Add VAO as GLuint
    float rollAngle, pitchAngle, yawAngle;
};

#endif  // VEHICLE3DMODEL_H

#gsl.pri
#相關檔案來源:C:\Qt\Qt5.12.11\Tools\mingw730_64\msys\local
# 宏定义项，指明采用GSL
DEFINES += GSL_DLL

# 指明GSL库所对应的头文件所在目录
INCLUDEPATH += $$PWD/include

# 指明依赖库关系
LIBS += -L$$PWD/lib -lgsl
LIBS += -L$$PWD/lib -lgslcblas

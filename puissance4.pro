TEMPLATE = app
CONFIG += console
CONFIG -= qt
LIBS = `sdl-config \
    --libs`
QMAKE_CXXFLAGS += -std=c++0x
SOURCES += Token.cpp \
    StateManager.cpp \
    StateEngine.cpp \
    Puissance4.cpp \
    OptionMenu.cpp \
    Main.cpp \
    InputEngine.cpp \
    Grid.cpp \
    GraphicEngine.cpp \
    GeneralMenu.cpp \
    EngineManager.cpp \
    SelectGameMode.cpp \
    CloseApplicationObject.cpp \
    Image.cpp \
    InGameMenu.cpp \
    Menu.cpp \
    RulesMenu.cpp \
    EndGame.cpp \
    GameState.cpp \
    CurseurGeneralMenu.cpp \
    Curseur.cpp \
    CurseurSelectGameMode.cpp \
    CurseurRulesMenu.cpp
HEADERS += Token.h \
    StateManager.h \
    StateEngine.h \
    State.h \
    Puissance4.h \
    OptionMenu.h \
    InputObject.h \
    InputEngine.h \
    Grid.h \
    GraphicEngine.h \
    GeneralMenu.h \
    EngineManager.h \
    Engine.h \
    DisplayObject.h \
    ComputeObject.h \
    SelectGameMode.h \
    CloseApplicationObject.h \
    Image.h \
    InGameMenu.h \
    Menu.h \
    RulesMenu.h \
    EndGame.h \
    GameState.h \
    CurseurGeneralMenu.h \
    Curseur.h \
    CurseurSelectGameMode.h \
    CurseurRulesMenu.h

KSocrat Dictionary
Version 5.0.1, 15 February 2023
---------------------------

You need qmake-qt5 to make the project.

1. Check you have qmake-qt5 to build the project.
2. Clone git project:
    git clone https://github.com/alchemist314/KSocrat.git
3. Download dictionary files:
    You can find the dictionary files in older Linux ditributives like Ubuntu, Debian...
    for example:
    https://sources.debian.org/src/ksocrat-data/20030107-2/source/ksocrat-data.tar.gz
4. Convert dictionary files to utf8 with commands:
    iconv -fkoi8-r -tutf8 enru.dic > enru_utf8.dic
    iconv -fkoi8-r -tutf8 ruen.dic > ruen_utf8.dic
5.Put dictionary files into folder:
    /opt/QT5/ksocrat-5.0.0/dict/enru_utf8.dic
    /opt/QT5/ksocrat-5.0.0/dict/ruen_utf8.dic
6. Run rebuild.sh from _build folder or execute command
    qmake-qt5 ../
    make -j4


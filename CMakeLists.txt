cmake_minimum_required(VERSION 3.15)
project(AtCoder)

set(CMAKE_CXX_STANDARD 14)

add_executable(AtCoder
        abc/abc161/A/main.cpp
        arc/arc028/A/main.cpp
        arc/arc088/A/main.cpp
        others/ddcc2020-qual/A/main.cpp
        others/dwacon6th-prelims/A/main.cpp
        others/hitachi2020/A/main.cpp
        others/hitachi2020/B/main.cpp
        others/hitachi2020/C/main.cpp
        others/hitachi2020/D/main.cpp
        others/jsc2019-qual/A/main.cpp
        others/keyence2020/A/main.cpp
        others/nikkei2019-2-qual/A/main.cpp
        others/panasonic2020/A/main.cpp
        others/panasonic2020/B/main.cpp
        others/panasonic2020/C/main.cpp
        others/panasonic2020/D/main.cpp
        others/sumitrust2019/A/main.cpp
        others/sumitrust2019/B/main.cpp
        test/abc152/C/main.cpp
        test/abc153/D/main.cpp
        test/abc158/E/main.cpp
        test/itp/main.cpp
        test/sumitrust2019/C/main.cpp
        main.cpp
        template.cpp)

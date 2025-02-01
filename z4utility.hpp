#pragma once

#include <iostream>
#include <chrono>

class Z4Timer{
    public:
        void start();
        void end();
    private:
        std::chrono::time_point<std::chrono::_V2::system_clock> m_start, m_end;
};

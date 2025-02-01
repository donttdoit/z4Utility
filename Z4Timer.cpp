#include "z4utility.hpp"

class Z4Timer
{
    public:
        Z4Timer()
        {
            start();
        }

        void start()
        {
            m_start = std::chrono::high_resolution_clock::now();
        }

        void end()
        {
            m_end = std::chrono::high_resolution_clock::now();
            std::chrono::duration<float> duration = m_end - m_start;
            std::cout << "DURATION: " << duration.count() << " s" << std::endl;
        }
    
    private:
        std::chrono::time_point<std::chrono::_V2::system_clock> m_start, m_end;

};
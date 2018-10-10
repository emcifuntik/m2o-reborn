/** @file CHuman2.hpp
*  @brief Game's Entity class
*
*
*  @author Tuxick
*/

#pragma once

namespace M2
{
    /* ref pointer */
    template<typename T>
    class RefPtr {
    public:
        T * ptr = nullptr;
        uint32_t countUsed = 0;
    };
};

/**
 * @file iniparser.h
 * @author Krisna Pranav
 * @brief Ini Parser Main Header File 
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022 MIT License
 * 
 */

#pragma once

#include <map>
#include <assert.h>
#include <iostream>

/**
 * @brief contains the classes and functions 
 * 
 */
namespace iniparser {

    /**
     * @brief whie spaces
     * 
     * @return constexpr const char* 
     */
    constexpr const char *whitespaces() {
        return " \t\n\r\f\v";
    }

    /**
     * @brief trim function 
     * 
     * @param str 
     */
    inline void trim(std::string &str) {
        auto lastpos = str.find_last_not_of(whitespaces());
        if (lastpos == std::string::npos) {
            str.clear();
            return;
        }

        str.erase(lastpos + 1);
        str.erase(0, str.find_first_of(whitespaces()));
    }

    /**
     * @brief trim copy function
     * 
     * @param str 
     * @return std::string 
     */
    inline std::string trimCopy(const std::string &str) {
        auto firstpos = str.find_first_not_of(whitespaces());
        if (firstpos == std::string::npos)
            return "";
        
        auto lastpos = str.find_last_not_of(whitespcaes());
        return str.substr(firstpos, lastpos);
    } 

}

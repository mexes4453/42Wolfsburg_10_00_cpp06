/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:50:33 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 08:30:07 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

void    ScalarConverter::convert(std::string str)
{
    convertToChar(str);
    convertToInt(str);
    convertToFloat(str);
    convertToDouble(str);
}

void ScalarConverter::convertToChar(std::string str)
{
    int                 toInt = 0;
    char                toChar = '\0';
    std::istringstream  xInpStrStream(str);

    if (xInpStrStream >> toInt)
    {
        toChar = static_cast<char>(toInt);
        if (!(isprint(toChar)))
        {
            COUT << "char: Non displayable" << ENDL;
        }
        else
        {
            COUT << "char: '" << toChar << "'" << ENDL;
        }
    }
    else
    {
        if (str.size() == 1 && isalpha(str[0]))
        {
            toChar = str[0];
            if (!(isprint(toChar)))
            {
                COUT << "char: Non displayable" << ENDL;
            }
            else
            {
                COUT << "char: '" << toChar << "'" << ENDL;
            }
        }
        else
        {
            COUT << "char: impossible" << ENDL;
        }
    }
}



void ScalarConverter::convertToInt(std::string str)
{
    int                 toInt;
    std::istringstream  xInpStrStream(str);
    
    if (xInpStrStream >> toInt)
    {
        COUT << "int: " << toInt << ENDL;
    }
    else
    {
        if (str.size() == 1 && isalpha(str[0]))
        {
            toInt = static_cast<int>(str[0]);
            COUT << "int: " << toInt << ENDL;
        }
        else
        {
            COUT << "int: impossible" << ENDL;
        }
    }
}



void ScalarConverter::convertToFloat(std::string str)
{
    int                 toInt;
    float               toFloat;
    std::istringstream  xInpStrStream(str);

    if (str.size() == 1 && isalpha(str[0]))
    {
        toInt = static_cast<int>(str[0]);
        toFloat = static_cast<float>(toInt);
    }
    else
    {
        toFloat = static_cast<float>(atof(str.c_str()));
    }
    COUT << "float: " << std::fixed << std::setprecision(1) << toFloat << "f" << ENDL;
}



void ScalarConverter::convertToDouble(std::string str)
{
     int                toInt;
    float               toFloat;
    std::istringstream  xInpStrStream(str);

    if (str.size() == 1 && isalpha(str[0]))
    {
        toInt = static_cast<int>(str[0]);
        toFloat = static_cast<float>(toInt);
    }
    else
    {
        toFloat = static_cast<float>(atof(str.c_str()));
    }
    double   toDouble = static_cast<double>(toFloat);
    COUT << "double: " << std::fixed << std::setprecision(1) << toDouble << ENDL;
}

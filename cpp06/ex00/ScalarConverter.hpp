/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:50:28 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 08:58:04 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include <cstdlib>
# include <cctype>
# include <sstream>


# define COUT std::cout
# define ENDL std::endl

class ScalarConverter
{
    public:
        static void convertToChar(std::string str);
        static void convertToInt(std::string str);
        static void convertToFloat(std::string str);
        static void convertToDouble(std::string str);
        static void convert(std::string str);
};

#endif // SCALARCONVERTER_HPP
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:39:51 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 08:57:49 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


int main(int argc, char *argv[])
{
    switch (argc)
    {
        case 1:
            COUT << "Please provide argument\n" << ENDL;
            break ;
        case 2:
        {
            ScalarConverter converter;
            converter.convert(argv[1]);
            break ;

        }
        default:
            COUT << "Too many args provided. Only one arg is required\n\n";
            break ;
    }
    return (0);
}

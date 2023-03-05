/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:57:19 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 11:29:18 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
# define COUT std::cout
# define ENDL std::endl


int main(void)
{
    
    Data packet;
    packet.chr = 0x11;
    packet.idx = 0x05;
    packet.info = 0xFFAD;
    
    Serializer serialObj;
    
    
    COUT << "Before operation: packet addr -> " << &packet << ENDL;

    Data *ptr_packet = serialObj.deserialize(serialObj.serialize(&packet));

    COUT << "After operation: packet addr -> " << ptr_packet << ENDL;
    
    COUT << "Comparing variable and its corresponding pointers\n";
    if (&packet == ptr_packet)
    {
        COUT << "Addr is same" << ENDL;
        COUT << static_cast<int>(packet.chr) << " == " 
             << static_cast<int>(ptr_packet->chr) << ENDL;
             
        COUT << static_cast<int>(packet.idx) << " == "
             << static_cast<int>(ptr_packet->idx) << ENDL;
             
        COUT << packet.info << " == " << ptr_packet->info << ENDL;
    }
    else
    {
        COUT << "Error! There is a mismatch\n";
    }

    return (0);
}
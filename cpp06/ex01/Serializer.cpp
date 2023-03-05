/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:21:03 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 10:24:41 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t   Serializer::serialize(Data *ptr)
{
    return ((reinterpret_cast<uintptr_t>(ptr)));
}



Data* Serializer::deserialize(uintptr_t raw)
{
    Data *data_ptr;
    
    data_ptr = reinterpret_cast<Data *>(raw);
    return (data_ptr);
}

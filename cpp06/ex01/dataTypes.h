/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dataTypes.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cudoh <cudoh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:32:40 by cudoh             #+#    #+#             */
/*   Updated: 2023/03/05 10:07:00 by cudoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATATYPES_H
# define DATATYPES_H
# include <stdint.h>


typedef struct s_Data
{
    unsigned char   chr;
    uint8_t         idx;
    uint16_t        info;
} Data;

#endif  // DATATYPES_H
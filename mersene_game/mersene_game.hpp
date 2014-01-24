/* 
 * File:   mersene_game.hpp
 * Author: aws4y
 *
 * Created on January 17, 2014, 10:35 AM
 */

#include <cstdlib>

#ifndef MERSENE_GAME_HPP
#define	MERSENE_GAME_HPP

class Primelist
{
    private:
     uint32_t *primelist;
     uint32_t length;
     public:
         
        Primelist(uint32_t  l)
        {
            length=l;
            primelist=(uint32_t *)calloc(sizeof(uint32_t),l);        
        }
  
};

#endif	/* MERSENE_GAME_HPP */


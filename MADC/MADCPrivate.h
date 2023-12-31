/*
title: ADC Driver PRIVATE
author:M.Nour
version: 0
date:3/12/2022

*/

#ifndef _ADCPRIVATE_H
#define _ADCPRIVATE_H

#define ADCMUX ((u8*)0X27)
#define ADCSRA ((u8*)0X26)
#define ADCL ((volatile u8*)0X24)
#define ADCH ((volatile u8*)0X25)
#define SFIOR ((u8*)0x50)


typedef enum admux
{
    mux0,
    mux1,
    mux2,
    mux3,
    mux4,
    adlar,
    refs0,
    refs1
}admux;

typedef enum adcsra
{
    adps0,
    adps1,
    adps2,
    adie,
    adif,
    adate,
    adsc,
    aden
}adcsra;

#endif
/*
 * serialunc.h
 *
 *  Created on: 2016/01/03
 *      Author: contec
 */

#ifndef _SERIALFUNC_H_
#define _SERIALFUNC_H_

extern int Serial_PortOpen_Half( char *AsDev, long AlSpeed, int AiLength, int AiStop, int AiParity , int AiWait, int AiFlow, int AiBlockMode);
extern int Serial_PortOpen_Func( char *AsDev, long AlSpeed, int AiLength, int AiStop, int AiParity ,int AiWait, int AiFlow, int AiOpenMode );
extern void Serial_PortSetParameter(int AiPort, int AiSpeed, int AiLength, int AiStop, int AiParity, int AiWait, int AiFlow);
extern void Serial_PortClose( int AiPort );
extern int Serial_PutChar( int AiPort, unsigned char AcChar );
extern int Serial_GetChar( int AiPort );
extern int Serial_GetString( int AiPort, char *AsBuffer, int AiLen );
extern int Serial_PutString( int AiPort, char *AsBuffer, int AiLen );
extern int Serial_SumCheck( char *AsBuffer, int AiLen, int AiComplement );
extern void Serial_Set_Rts( int AiPort, int AiValue );
extern void Serial_Set_Dtr( int AiPort, int AiValue );
extern void Serial_Get_Lsr( int AiPort, int *AiValue );


#define Serial_PortOpen_Full( AsDev, AlSpeed, AiLength, AiStop, AiParity, AiWait, AiFlow, AiBlockMode) \
	Serial_PortOpen_Func( AsDev, AlSpeed, AiLength, AiStop, AiParity, AiWait, AiFlow, AiBlockMode)

#define Serial_PortOpen( AsDev, AlSpeed, AiLength, AiStop, AiParity, AiWait, AiFlow, AiBlockMode) \
	Serial_PortOpen_Func( AsDev, AlSpeed, AiLength, AiStop, AiParity, AiWait, AiFlow, AiBlockMode)

#ifndef TIOCSRS485
#define TIOCSRS485      0x542F
#endif

#define LSR_OE	0x02
#define LSR_PE	0x04
#define LSR_FE	0x08

#endif /* SERIALUNC_H_ */

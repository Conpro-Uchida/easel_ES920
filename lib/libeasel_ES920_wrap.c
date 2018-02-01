/***

	libeasel_ES920_wrap.c - libeasel_ES920_Wrapper functions library
	Copyright (C) 2017 Tomoyuki Niimi, Syunsuke Okamoto.<okamoto@contec.jp>.
*
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
* 
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
* 
* You should have received a copy of the GNU Lesser General Public
* License along with this library; if not, see
   <http://www.gnu.org/licenses/>.  

***/

#include <stdio.h>
#include "libeasel_ES920.h"

// wrapper

/***
default setting function
	@~English
	@brief EASEL 920MHz Default Module Parameter Set
	@par Default Parameter : 125kHz, 1channel, PanID : 1 , Send Level -85dBm, Receive Level -95dBm, Send Time 130(usec), Send Num 6, Ack Retry Num 4, Ack Time 100(usec)
	@~Japanese
	@brief EASEL 920MHz  Module の 無線  通常設定関数
	@par パラメータ : 100kBps, 60チャネル, 1mW , 送信レベル -85dBm, 受信レベル -95dBm, 送信時間 130(usec), 送信回数 6回, ACKリトライ回数 4回, ACKリトライ時間 100 (usec)
***/
int easel_ES920_set_wireless_default(void)
{

	return easel_ES920_set_wireless(
			EASEL_ES920_NODE_ENDDEVICE,
			EASEL_ES920_BANDWIDTH_125K,
			EASEL_ES920_SF7,	
			1,			//Channel: 1
			1,			//Panid : 0x0001
			0,			//OwnAddr : 0x0001
			1,			//DstAddr : 0x0000
			EASEL_ES920_ACK_ON,  	 
			3,			//Retry: 3
			EASEL_ES920_TRASMOD_PAYLOAD,
			EASEL_ES920_RCVID_ON,	
			EASEL_ES920_RSSI_ON,
			EASEL_ES920_MODE_OPERATION,
			EASEL_ES920_BAUD_115200,
			EASEL_ES920_SLEEP_OFF, 
			50,			//Sleep time: 50
			13			//Power: 13dBm
	);
}

/**
	@~English
	@brief EASEL 920MHz Module Set Wireless function
	@param node : node
	@param bw : band width
	@param sf : spreading factor
	@param ch : channel
	@param panid : pan network address
	@param ownid : own network address
	@param dstid : destination network address
	@param acksw : acknowledge setting
	@param ackRetryNum : acknowledge retry number
	@param trmode : transmode
	@param rcvsw : mating node network address grant setting
	@param rssisw : setting of reception radio field intensity(RSSI)setting
	@param opmode : operation mode
	@param brate : baudrate
	@param slepsw : sleep settings
	@param slepNum : sleep time
	@param outpw : power
	@return Success : 0 , Failed : Other than 0
	@~Japanese
	@brief EASEL 920MHz  Module の 無線設定関数
	@param node : ノード種別設定
	@param bw : 帯域幅設定
	@param sf : 拡散率設定
	@param ch : 無線チャンネル番号設定
	@param panid : PANネットワークアドレス設定
	@param ownid : 自ノードネットワークアドレス設定
	@param dstid : 送信先ノードネットワークアドレス設定
	@param acksw : Acknowledge 使用設定
	@param ackRetryNum : Ackリトライ回数設定
	@param trmode : 転送モード設定
	@param rcvsw : 相手ノードネットワークアドレス付与設定
	@param rssisw : 受信電波強度(RSSI)付与設定
	@param opmode : 動作モード設定
	@param brate : UART転送速度設定
	@param slepsw : スリープモード設定
	@param slepNum : スリープタイマー時間設定
	@param outpw : 送信出力設定
	@return 成功:  0 失敗 :  0以外
**/
int easel_ES920_set_wireless( int node, int bw, int sf, int ch, int panid, int ownid, int dstid, int acksw, int ackRetryNum, int trmode, int rcvsw, int rssisw, int opmode, int brate, int slepsw, int slepNum, int outpw)
{
	int iRet;

	iRet = easel_ES920_set_node(node);
	if(iRet) return -1;	

	iRet = easel_ES920_set_bw(bw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_sf(sf);
	if(iRet) return -1;	

	iRet = easel_ES920_set_ch(ch);
	if(iRet) return -1;	

	iRet = easel_ES920_set_panid(panid);
	if(iRet) return -1;	

	iRet = easel_ES920_set_ownid(ownid);
	if(iRet) return -1;	

	iRet = easel_ES920_set_dstid(dstid);
	if(iRet) return -1;	

	iRet = easel_ES920_set_acksw(acksw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_ackRetryNum(ackRetryNum);
	if(iRet) return -1;	

	iRet = easel_ES920_set_trmode(trmode);
	if(iRet) return -1;	

	iRet = easel_ES920_set_rcvsw(rcvsw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_rssisw(rssisw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_opmode(opmode);
	if(iRet) return -1;	
	
	iRet = easel_ES920_set_brate(brate);
	if(iRet) return -1;	

	iRet = easel_ES920_set_slepsw(slepsw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_slept(slepNum);
	if(iRet) return -1;	

	iRet = easel_ES920_set_outpw(outpw);
	if(iRet) return -1;	

	return 0;
}

/**
	@~English
	@brief EASEL 920MHz Module Set Wireless function(Set Only)
	@param node : node
	@param bw : band width
	@param sf : spreading factor
	@param ch : channel
	@param panid : pan network address
	@param ownid : own network address
	@param dstid : destination network address
	@param acksw : acknowledge setting
	@param ackRetryNum : acknowledge retry number
	@param trmode : transmode
	@param rcvsw : mating node network address grant setting
	@param rssisw : setting of reception radio field intensity(RSSI)setting
	@param brate : baudrate
	@param slepsw : sleep settings
	@param slepNum : sleep time
	@param outpw : power
	@return Success : 0 , Failed : Other than 0
	@~Japanese
	@brief EASEL 920MHz  Module の 無線設定関数(設定の保存のみ)
	@param node : ノード種別設定
	@param bw : 帯域幅設定
	@param sf : 拡散率設定
	@param ch : 無線チャンネル番号設定
	@param panid : PANネットワークアドレス設定
	@param ownid : 自ノードネットワークアドレス設定
	@param dstid : 送信先ノードネットワークアドレス設定
	@param acksw : Acknowledge 使用設定
	@param ackRetryNum : Ackリトライ回数設定
	@param trmode : 転送モード設定
	@param rcvsw : 相手ノードネットワークアドレス付与設定
	@param rssisw : 受信電波強度(RSSI)付与設定
	@param brate : UART転送速度設定
	@param slepsw : スリープモード設定
	@param slepNum : スリープタイマー時間設定
	@param outpw : 送信出力設定
	@return 成功:  0 失敗 :  0以外
**/
int easel_ES920_set_only( int node, int bw, int sf, int ch, int panid, int ownid, int dstid, int acksw, int ackRetryNum, int trmode, int rcvsw, int rssisw, int brate, int slepsw, int slepNum, int outpw)
{
	int iRet;

	iRet = easel_ES920_set_node(node);
	if(iRet) return -1;	

	iRet = easel_ES920_set_bw(bw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_sf(sf);
	if(iRet) return -1;	

	iRet = easel_ES920_set_ch(ch);
	if(iRet) return -1;	

	iRet = easel_ES920_set_panid(panid);
	if(iRet) return -1;	

	iRet = easel_ES920_set_ownid(ownid);
	if(iRet) return -1;	

	iRet = easel_ES920_set_dstid(dstid);
	if(iRet) return -1;	

	iRet = easel_ES920_set_acksw(acksw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_ackRetryNum(ackRetryNum);
	if(iRet) return -1;	

	iRet = easel_ES920_set_trmode(trmode);
	if(iRet) return -1;	

	iRet = easel_ES920_set_rcvsw(rcvsw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_rssisw(rssisw);
	if(iRet) return -1;	

	//CONFIGRATION Only
	iRet = easel_ES920_set_opmode(EASEL_ES920_MODE_CONFIGRATION);
	if(iRet) return -1;	
	
	iRet = easel_ES920_set_brate(brate);
	if(iRet) return -1;	

	iRet = easel_ES920_set_slepsw(slepsw);
	if(iRet) return -1;	

	iRet = easel_ES920_set_slept(slepNum);
	if(iRet) return -1;	

	iRet = easel_ES920_set_outpw(outpw);
	if(iRet) return -1;	

	//FlashROM Settings Save
	easel_ES920_save_param();

	return 0;
}

/**
	@~English
	@brief EASEL 920MHz Module load Wireless settings function
	@~Japanese
	@brief EASEL 920MHz  Module の 無線設定デフォルト値の読出し
**/
void easel_ES920_set_load()
{
	easel_ES920_load_default();
}

/**
	@~English
	@brief EASEL 920MHz Module Operation Mode Start
	@~Japanese
	@brief EASEL 920MHz  Module の オペレーションモード遷移
**/
void easel_ES920_set_operation()
{
	easel_ES920_set_mode_operation();
}

/**
	@~English
	@brief EASEL 920MHz Module Set Wireless function(structure)
	@param es920param : wireless settings structure
	@return Success : 0 , Failed : Other than 0
	@~Japanese
	@brief EASEL 920MHz  Module の 無線設定関数(構造体)
	@param es920param : 無線設定構造体
	@return 成功:  0 失敗 :  0以外
**/
int easel_ES920_set_wireless_by_structure( EASEL920PARAM es920param )
{

	return easel_ES920_set_wireless(
			es920param.node,
			es920param.bw,
			es920param.sf,
			es920param.ch,
			es920param.panid,
			es920param.ownid,
			es920param.dstid,
			es920param.ack,
			es920param.retry,
			es920param.transmod,
			es920param.rcvid,
			es920param.rssi,
			es920param.mode,
			es920param.baudrate,
			es920param.sleep,
			es920param.sleeptime,
			es920param.power
			);
}


/*
 *  MacAudioPacket.h
 *  DwycoVideoTest
 *
 *  Created by Christopher Corbell on 11/15/09.
 *
 */

#ifndef _MACAUDIOPACKET_H_
#define _MACAUDIOPACKET_H_

#include <string>
#include <sstream>

struct MacAudioPacket {
	char *			data; // allocated with new char[]; dll will delete
	int				dataSize;
	Float64			sampleTime;
	
	MacAudioPacket() : data(NULL), dataSize(0), sampleTime(0.0) {}
	
	std::string ToString() {
		std::stringstream ss;
		ss << "<MacAudioPacket dataSize=\"" << dataSize << "\" sampleTime=\"" << sampleTime << "\"/>";
		return ss.str();
	}
};

#endif // _MACAUDIOPACKET_H_

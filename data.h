#ifndef __data_h__
#define __data_h__

#include <stdint.h>

struct block {
	
	//This is the resulting Hash of the last Block
	uint8_t lastBlockHash[		/*Size of the resulting Hash*/];
	
	//This is the merkel root of all following Accounts
	uint8_t merkelRoot[			/*Size of the Hash used to Merkel it up xD*/]; 	
	

	
	
};


struct threadDescriptor {
	
	uint64_t thread_id;
	uint64_t inputc;
	uint8_t **inputv;

	

};

#endif

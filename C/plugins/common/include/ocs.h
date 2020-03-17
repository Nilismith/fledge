#ifndef _OCS_H
#define _OCS_H
/*
 * Fledge OSI Soft OCS integration.
 *
 * Copyright (c) 2020 Dianomic Systems
 *
 * Released under the Apache 2.0 Licence
 *
 * Author: Stefano Simonelli
 */

#include <string>

using namespace std;

#define OCS_HOST          "dat-b.osisoft.com:443"
#define TIMEOUT_CONNECT   10
#define TIMEOUT_REQUEST   10
#define RETRY_SLEEP_TIME  1
#define MAX_RETRY         3

#define URL_RETRIEVE_TOKEN "/identity/connect/token"



/**
 * The OCS class.
 */
class OCS
{
	public:
		OCS();

		// Destructor
		~OCS();

		string  retrieveToken(const string& clientId, const string& clientSecret);
		string  extractToken(const string& response);
};
#endif

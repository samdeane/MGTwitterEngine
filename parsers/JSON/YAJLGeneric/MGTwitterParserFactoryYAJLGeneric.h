//
//  MGTwitterParserFactoryYAJLGeneric.h
//
//  Created by Sam Deane on 21/09/2010.
//  Copyright 2010 Elegant Chaos. All rights reserved.
//

#import "MGTwitterParserFactoryJSON.h"

@class MGTwitterEngine;

// --------------------------------------------------------------------------
//! Parser factory which uses the YAJL json parsing library, but
//! attempts to parse all results generically.
// --------------------------------------------------------------------------

@interface MGTwitterParserFactoryYAJLGeneric : MGTwitterParserFactoryJSON
{
	
}

- (void) parseData: (NSData*) data URL: (NSURL*) URL identifier: (NSString*) identifier requestType: (MGTwitterRequestType) requestType responseType: (MGTwitterResponseType) responseType engine: (MGTwitterEngine*) engine;

@end

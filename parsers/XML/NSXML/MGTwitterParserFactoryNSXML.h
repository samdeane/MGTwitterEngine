//
//  MGTwitterParserFactoryNSXML.h
//
//  Created by Sam Deane on 21/09/2010.
//  Copyright 2011 Sam Deane, Elegant Chaos. All rights reserved.
//

#import "MGTwitterParserFactoryXML.h"

// --------------------------------------------------------------------------
//! Parser factory that works with the default NSXML parser.
// --------------------------------------------------------------------------

@interface MGTwitterParserFactoryNSXML : MGTwitterParserFactoryXML
{
	
}

- (void) parseData: (NSData*) data URL: (NSURL*) URL identifier: (NSString*) identifier requestType: (MGTwitterRequestType) requestType responseType: (MGTwitterResponseType) responseType engine: (MGTwitterEngine*) engine;

@end

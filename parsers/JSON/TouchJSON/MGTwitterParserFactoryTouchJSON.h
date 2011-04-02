//
//  MGTwitterParserFactoryTouchJSON.h
//
//  Created by Sam Deane on 21/09/2010.
//  Copyright 2011 Sam Deane, Elegant Chaos. All rights reserved.
//

#import "MGTwitterParserFactoryJSON.h"

// --------------------------------------------------------------------------
//! Parser factory which uses the TouchJSON parsing library.
// --------------------------------------------------------------------------

@interface MGTwitterParserFactoryTouchJSON : MGTwitterParserFactoryJSON
{
	
}

- (void) parseData: (NSData*) data URL: (NSURL*) URL identifier: (NSString*) identifier requestType: (MGTwitterRequestType) requestType responseType: (MGTwitterResponseType) responseType engine: (MGTwitterEngine*) engine;

@end

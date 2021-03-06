//
//  MGTwitterParserFactoryLibXML.h
//
//  Created by Sam Deane on 21/09/2010.
//  Copyright 2010 Elegant Chaos. All rights reserved.
//

#import "MGTwitterParserFactoryXML.h"

// --------------------------------------------------------------------------
//! Parser factory that works with the libxml2 parsing library.
// --------------------------------------------------------------------------

@interface MGTwitterParserFactoryLibXML : MGTwitterParserFactoryXML
{

}

- (void) parseData: (NSData*) data URL: (NSURL*) URL identifier: (NSString*) identifier requestType: (MGTwitterRequestType) requestType responseType: (MGTwitterResponseType) responseType engine: (MGTwitterEngine*) engine;

@end

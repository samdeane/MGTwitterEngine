//
//  MGTwitterParserFactoryXML.h
//
//  Created by Sam Deane on 21/09/2010.
//  Copyright 2010 Elegant Chaos. All rights reserved.
//

#import "MGTwitterParserFactory.h"

// --------------------------------------------------------------------------
//! Common base class for all XML based parsers.
// --------------------------------------------------------------------------

@interface MGTwitterParserFactoryXML : MGTwitterParserFactory 
{
	
}

// --------------------------------------------------------------------------
//! Returns the string @"xml" to indicate that we want XML data.
// --------------------------------------------------------------------------

- (NSString*) APIFormat;

@end

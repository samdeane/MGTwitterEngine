//
//  MGTwitterEngineParserFactory.h
//
//  Created by Sam Deane on 21/09/2010.
//  Copyright 2010 Elegant Chaos. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MGTwitterRequestTypes.h"

@class MGTwitterEngine;

// --------------------------------------------------------------------------
//! Astract base class for all parser factories.
//!
//! The MGTwitterEngine uses a parser factory to make a parser
//! to interpret the results returned to it by twitter. We provide
//! different parser implementations that work with XML or JSON
//! data, using a number of underlying parsing libraries.
// --------------------------------------------------------------------------

@interface MGTwitterParserFactory : NSObject 
{

}

// --------------------------------------------------------------------------
//! Return the basic API format that this parser supports. 
//! Should be one of @"xml" or @"json".
// --------------------------------------------------------------------------

- (NSString*) APIFormat;

// --------------------------------------------------------------------------
//! Parse some data that was sent to the engine from Twitter.
// --------------------------------------------------------------------------

- (void) parseData: (NSData*) data 
			URL: (NSURL*) URL 
			identifier: (NSString*) identifier 
			requestType: (MGTwitterRequestType) requestType 
			responseType: (MGTwitterResponseType) responseType 
			engine: (MGTwitterEngine*) engine;

@end

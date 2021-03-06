//
//  MGTwitterMessagesYAJLParser.m
//  MGTwitterEngine
//
//  Created by Matt Gemmell on 11/02/2008.
//  Copyright 2008 Instinctive Code.
//

#import "MGTwitterMessagesYAJLParser.h"
#import "MGTwitterLogging.h"

@implementation MGTwitterMessagesYAJLParser

- (void)addValue:(id)value forKey:(NSString *)key
{
	if (_sender)
	{
		[_sender setObject:value forKey:key];
		MGTWITTER_LOG_PARSING(@"messages:   sender: %@ = %@ (%@)", key, value, NSStringFromClass([value class]));
	}
	else if (_recipient)
	{
		[_recipient setObject:value forKey:key];
		MGTWITTER_LOG_PARSING(@"messages:   recipient: %@ = %@ (%@)", key, value, NSStringFromClass([value class]));
	}
	else if (_status)
	{
		[_status setObject:value forKey:key];
		MGTWITTER_LOG_PARSING(@"messages:   status: %@ = %@ (%@)", key, value, NSStringFromClass([value class]));
	}
}

- (void)startDictionaryWithKey:(NSString *)key
{
	MGTWITTER_LOG_PARSING(@"messages: dictionary start = %@", key);

	if (! _status)
	{
		_status = [[NSMutableDictionary alloc] initWithCapacity:0];
	}
	else
	{
		if ([key isEqualToString:@"sender"])
		{
			_sender = [[NSMutableDictionary alloc] initWithCapacity:0];
		}
		else
		{
			_recipient = [[NSMutableDictionary alloc] initWithCapacity:0];
		}
	}
}

- (void)endDictionary
{
	if (_sender)
	{
		[_status setObject:_sender forKey:@"sender"];
		[_sender release];
		_sender = nil;
	}
	else if (_recipient)
	{
		[_status setObject:_recipient forKey:@"recipient"];
		[_recipient release];
		_recipient = nil;
	}
	else
	{
		[_status setObject:[NSNumber numberWithInt:requestType] forKey:TWITTER_SOURCE_REQUEST_TYPE];
		
		[self _parsedObject:_status];
		
		[parsedObjects addObject:_status];
		[_status release];
		_status = nil;
	}
	
	MGTWITTER_LOG_PARSING(@"messages: dictionary end");
}

- (void)startArrayWithKey:(NSString *)key
{
	MGTWITTER_LOG_PARSING(@"messages: array start = %@", key);
}

- (void)endArray
{
	MGTWITTER_LOG_PARSING(@"messages: array end");
}

- (void)dealloc
{
	[_status release];
	[_sender release];
	[_recipient release];

	[super dealloc];
}

@end

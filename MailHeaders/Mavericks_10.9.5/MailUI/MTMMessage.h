/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MTMMailbox, NSDate, NSString, NSURL;

@interface MTMMessage : NSObject
{
    MTMMailbox *_mailbox;
}

@property MTMMailbox *mailbox; // @synthesize mailbox=_mailbox;
@property(readonly) NSString *displayNameInMessageList;
- (unsigned long long)numberOfMessageInCurrentController;
- (BOOL)messageHasChangedFromSnapshot:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long readFlags;
@property(readonly) unsigned long long messageFlags;
@property(readonly) unsigned long long messageSize;
@property(readonly) NSDate *lastViewedDate;
@property(readonly) NSDate *savedDate;
@property(readonly) NSDate *receivedDate;
@property(readonly) NSDate *sentDate;
@property(readonly) NSString *to;
@property(readonly) NSString *author;
@property(readonly) NSString *subject;
@property(readonly) NSURL *URL;
@property(readonly) NSString *path;
@property(readonly) id revisionID;
@property(readonly) id identifier;
@property(readonly) id identifierForURL;

@end


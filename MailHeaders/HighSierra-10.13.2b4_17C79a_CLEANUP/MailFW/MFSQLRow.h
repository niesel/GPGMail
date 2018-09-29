//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSArray, NSDictionary;

@interface MFSQLRow : NSObject
{
    struct sqlite3_stmt *_statement;
    NSArray *_indexedColumns;
    NSDictionary *_namedColumns;
}

@property(readonly, copy, nonatomic) NSDictionary *namedColumns; // @synthesize namedColumns=_namedColumns;
@property(readonly, copy, nonatomic) NSArray *indexedColumns; // @synthesize indexedColumns=_indexedColumns;
@property(readonly, nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
//- (void).cxx_destruct;
- (id)debugDescription;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)init;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;

@end

/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTableRowView.h"

@class NSColor, NSTableView;

@interface RichTableRowView : NSTableRowView
{
    NSColor *_highlightColor;
    NSTableView *_tableView;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;

@end
